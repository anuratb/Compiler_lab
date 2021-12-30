#include "assgn6_19CS10071_19CS10072_translator.h"
using namespace std;



/********TYPES*********/

st_types_::st_types_(int wd, string nme, st_types_ *tp_, int addR, int sz) : width(wd), name_(nme), type_(tp_), addr(addR), sz_(sz), retType(NULL) {}

INT::INT() : st_types_(4, "int") {}
FLOAT::FLOAT() : st_types_(8, "float") {}
CHAR::CHAR() : st_types_(1, "char") {}
PTR::PTR(int addr_, st_types_ *tp_) : st_types_(8, "ptr", tp_, addr_)
{
    if (tp_ != NULL)
        this->name_ = "ptr(" + tp_->name_ + ")";
}

FUNCTION::FUNCTION() : st_types_(0, "function") {}
ARRAY::ARRAY(int sz, st_types_ *tp) : st_types_(tp->width * sz, "array", tp, 0, sz)
{
    if (tp != NULL)
        this->name_ = "array(" + to_string(sz) + "," + tp->name_ + ")";
}
VOID::VOID() : st_types_(0, "void") {}

/**************SYMBOL TABLE********************/

SymbolTable *createSymTab()
{
    SymbolTable *temp = new SymbolTable();
    temp->name = "ST" + to_string(SymbolTable::STcnt);
    SymbolTable::STcnt++;
    symTabList.push_back(temp);
    return temp;
}
SymbolTableRow::SymbolTableRow(string name, st_types_ *type, string initVal, int size, int offSet, SymbolTable *symTab)
    : name_(name), type_(type), initVal_(initVal), size_(size), offSet_(offSet), nestedTable_(symTab), isGlobal(0), ARoffset(0)
{
}
void SymbolTable::lazySetOffset()
{
    this->offset = 0;
    for (int i = 0; i < this->n; i++)
    {
        symtab[i].offSet_ = offset;
        offset += symtab[i].size_;
    }
}
int SymbolTable::STcnt = 0;
void SymbolTable::print()
{
    cout << "\n--------Printing symbol Table---------\n";
    cout << "Current Table: " << name << "\n";
    cout << "Parent Table Name: " << (par == NULL ? "null" : par->name) << "\n";
    cout << "Name      |Type    |Initial Value | Size  | Offset | Nested Table|\n";
    cout << "-------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << symtab[i].name_ << "    | " << symtab[i].type_->name_ << "   | " << symtab[i].initVal_ << "   | " << symtab[i].size_ << "  |" << symtab[i].offSet_ << "   | ";
        if (symtab[i].nestedTable_ == NULL)
        {
            cout << "null   |";
            //cout << symtab[i].ARoffset << "\n"; //for debug
        }
        else
        {
            cout << symtab[i].nestedTable_->name << "  |\n";
            
        }
    }
}
SymbolTableRow *SymbolTable::lookup(string src)
{
    // cout<<src<<"\n";
    for (int i = 0; i < n; i++)
    {
        if (symtab[i].name_ == src)
        {
            return symtab + i;
        }
    }
    SymbolTableRow *temp = NULL;
    if ((par != NULL) && (par != this))
        temp = par->peek(src);
    // cout<<"0::\n";
    if (temp != NULL)
        return temp;
    // cout<<"0::\n";
    //Else create symbol
    symtab[n++] = SymbolTableRow(src);
    // cout<<"0::\n";
    return symtab + n - 1;
}
/**
 * Gives true if symbol present else false
 */
SymbolTableRow *SymbolTable::peek(string src)
{
    // cout<<src<<"\n";
    for (int i = 0; i < n; i++)
    {
        if (symtab[i].name_ == src)
        {
            return symtab + i;
        }
    }
    SymbolTableRow *temp = NULL;
    if ((par != NULL) && (par != this))
        temp = par->peek(src);
    return temp;
}
void SymbolTable::update(SymbolTableRow *adr, SymbolTableRow rw)
{
    *adr = rw;
}

void SymbolTable::update(SymbolTableRow *adr, st_types_ *tp, int offset_)
{
    adr->offSet_ = offset_;
    adr->type_ = tp;
}

SymbolTableRow *gentemp(st_types_ *tp, string init)
{
    ST->symtab[ST->n++] = (SymbolTableRow("t" + to_string(cnt), tp, init, tp->width, ST->offset));
    ST->offset += tp->width;
    cnt++;
    return ST->symtab + ST->n - 1;
}

void insert(SymbolTable *sm, string name, st_types_ *type, string val)
{
    sm->symtab[sm->n++] = (SymbolTableRow(name, type, val, type->width, sm->offset)); //offset incremented
    sm->offset += type->width;
}
void insert(SymbolTable *sm, SymbolTableRow *row)
{
    sm->symtab[sm->n++] = (*row);
}

list<int> makelist(int ind)
{
    list<int> tmp;
    tmp.push_back(ind);
    return tmp;
}

void backpatch(list<int> &p, int target)
{
    for (auto itr : p)
    {
        quadArr.quadarray[itr].res = to_string(target);
    }
}

SymbolTable::SymbolTable()
{
    this->n = this->offset = 0;
}
/********TYPE CASTING************/
exprr *convert(exprr *expres, st_types_ *tp)
{
    // Note things like converting from char to int or int to float
    //depend on hardware implementation and to model those
    //in mahine independent sense we are using like
    //say inttochar(x) in 3 address code to make a call to the system and do the conversion
    //we cannot do these in compile time as for variable the actual current value may not be known
    //type conversion is assumed compatible
    SymbolTableRow *temp = gentemp(tp);
    emit("=", temp->name_, expres->loc->type_->name_ + "to" + tp->name_ + "(" + expres->loc->name_ + ")");
    exprr *curr = new exprr();
    curr->loc = temp;
    curr->Type = temp->type_;
    curr->isBool = 0;
    return curr;
}
declaratorAttr *convert(declaratorAttr *expres, st_types_ *tp)
{
    // Note things like converting from char to int or int to float
    //depend on hardware implementation and to model those
    //in mahine independent sense we are using like
    //say inttochar(x) in 3 address code to make a call to the system and do the conversion
    //we cannot do these in compile time as for variable the actual current value may not be known
    //type conversion is assumed compatible
    SymbolTableRow *temp = gentemp(tp);
    emit("=", temp->name_, expres->loc->type_->name_ + "to" + tp->name_ + "(" + expres->loc->name_ + ")");
    declaratorAttr *curr = new declaratorAttr();
    curr->loc = temp;
    curr->type = temp->type_;
    curr->width = temp->type_->width;
    return curr;
}
/**
 * @brief : This handles automatic type conversions like (int) + (float)
 */
int typecheck1(exprr *&a, exprr *&b)
{

    if (a->isBool)
    {
        if (b->loc->type_->name_ == "int")
        {
            convBooltoInt(a);
            return 1;
        }
        else if (b->loc->type_->name_ == "char")
        {
            convBooltoInt(a);
            b = convert(b, a->loc->type_);
            return 1;
        }
        else if (b->loc->type_->name_ == "float")
        {
            convBooltoInt(a);
            a = convert(a, b->loc->type_);
            return 1;
        }
    }
    else if (a->loc->type_->name_ == "int")
    {
        if (b->isBool)
        {
            convBooltoInt(b);
            return 1;
        }
        else if (b->loc->type_->name_ == "int")
            return 1;
        else if (b->loc->type_->name_ == "char")
        {
            b = convert(b, a->loc->type_);
            return 1;
        }
        else if (b->loc->type_->name_ == "float")
        {
            a = convert(a, b->loc->type_);
            return 1;
        }
    }
    else if (a->loc->type_->name_ == "char")
    {
        if (b->isBool)
        {
            convBooltoInt(b); //change to int
            a = convert(a, b->loc->type_);
            return 1;
        }
        else if (b->loc->type_->name_ == "char")
            return 1;
        else if (b->loc->type_->name_ == "int")
        {
            a = convert(a, b->loc->type_);
            return 1;
        }
        else if (b->loc->type_->name_ == "float")
        {
            //convert a to float
            a = convert(a, new INT());
            a = convert(a, b->loc->type_);
            return 1;
        }
    }
    else if (a->loc->type_->name_ == "float")
    {
        if (b->isBool)
        {
            convBooltoInt(b);              //change to int
            b = convert(b, a->loc->type_); //  then to float
            return 1;
        }
        else if (b->loc->type_->name_ == "float")
            return 1;
        if (b->loc->type_->name_ == "int")
        {
            b = convert(b, a->loc->type_);
            return 1;
        }
        else if (b->loc->type_->name_ == "char")
        {
            //convert a to float
            b = convert(b, new INT());     //First to int
            b = convert(b, a->loc->type_); //then to float
            return 1;
        }
    }

    return 0;
}
/**
 * @brief : for forced type checking 
 */
int typecheck2(exprr *&a, st_types_ *tp)
{
    //tp = NULL to denote conversion to bool
    //to check and convert a to type tp
    if (tp == NULL)
    { //indicates convert to bool
        if (a->isBool)
        {
            return 1; //no change reqd
        }
        if (a->loc->type_->type_ != NULL)
            return 0;
        if (a->loc->type_->name_ != "int")
            a = convert(a, new INT());
        convInttoBool(a);
        return 1;
    }
    if (a->isBool)
    {
        if (tp->type_ != NULL) //has nested type
        {
            return 0; //not compatible
        }
        if (tp->name_ == "int")
        {
            convBooltoInt(a);
            return 1;
        }
        else if (tp->name_ == "char")
        {
            a = convert(a, tp);
            return 1;
        }
        else if (tp->name_ == "flaot")
        {
            a = convert(a, tp);
            return 1;
        }
    }
    else
    {
        if (a->loc == NULL)
        {
            return 0;
        }
        st_types_ *t1 = a->loc->type_; //loc is not numm now
        st_types_ *t2 = tp;
        int lv1 = 0;
        int lv2 = 0;
        if (t1 == NULL || t2 == NULL)
            return 0;
        while (t1->type_ != NULL)
        {
            t1 = t1->type_;
            lv1++;
        }
        while (t2->type_ != NULL)
        {
            t2 = t2->type_;
            lv2++;
        }
        if (lv1 != lv2)
            return 0;
        //now t1 and t2 are the base types
        if (lv1 == 0)
        {
            //no pointers or arrays involved
            if (t1->name_ == t2->name_)
                return 1;
            a = convert(a, tp);
            return 1;
        }
        else
        {
            if (t1->name_ == t2->name_)
                return 1; //same type pointer
            return 0;     //different type pointer/array
        }
    }
    return 0;
}

int typecheck2(declaratorAttr *&a, st_types_ *tp)
{

    //to check and convert a to type tp

    if (tp == NULL)
    {
        return 0;
    }

    if (a->loc == NULL)
    {
        return 0;
    }
    st_types_ *t1 = a->loc->type_; //loc is not numm now
    st_types_ *t2 = tp;
    int lv1 = 0;
    int lv2 = 0;
    if (t1 == NULL || t2 == NULL)
        return 0;
    while (t1->type_ != NULL)
    {
        t1 = t1->type_;
        lv1++;
    }
    while (t2->type_ != NULL)
    {
        t2 = t2->type_;
        lv2++;
    }
    // cout<<lv1<<" "<<lv2<<"\n";
    if (lv1 != lv2)
        return 0;
    //now t1 and t2 are the base types
    if (lv1 == 0)
    {
        //no pointers or arrays involved
        if (t1->name_ == t2->name_)
            return 1;
        a = convert(a, tp);
        return 1;
    }
    else
    {
        if (t1->name_ == t2->name_)
            return 1; //same type pointer
        return 0;     //different type pointer/array
    }

    return 0;
}
void convBooltoInt(exprr *expres)
{
    // i  : t = 0  -->from falseList
    // i+1 : goto i+3
    // i+2 : t = 1  -->from trueList
    // i+3 : ...
    expres->loc = gentemp(new INT());
    backpatch(expres->falseList, nextinstr()); //target of all truelists towards assigning 1
    emit("=", expres->loc->name_, "0");
    emit("goto", "", "", to_string(nextinstr() + 2));
    backpatch(expres->trueList, nextinstr());
    emit("=", expres->loc->name_, "1");
    expres->Type = expres->loc->type_;
    expres->isBool = 0;
}
void convInttoBool(exprr *expres)
{
    // i : if t==0 goto ...   //false list
    //i+1 : goto ...  //truelist
    expres->falseList = makelist(nextinstr());
    emit("ifEQgoto", expres->loc->name_, "0", "");
    expres->trueList = makelist(nextinstr());
    emit("goto", "", "", "");
    expres->isBool = 1;
}

list<int> merge(list<int> a, list<int> b)
{
    a.merge(b);
    return a;
}
st_types_ *merge(st_types_ *a, st_types_ *b)
{ //for pointers
    //cout<<"1a::\n";
    if (a == NULL)
        return b;
    // cout<<b->name_<<"\n";
    //cout<<"1::\n";
    if (a->type_ == NULL)
    {
        // cout<<"1::\n";

        a->type_ = b;
        // cout<<"1::\n";
        a->name_ = "ptr(" + b->name_ + ")";
        return a;
        //  cout<<"1::\n";
    }
    else
    {
        a->type_ = merge(a->type_, b);
        a->name_ = "ptr(" + a->type_->name_ + ")";
    }

    return a;
}

/****************QUAD ARRAY****************/
void QuadArray::print()
{
    int ind = 0;
    for (auto itr : quadarray)
    {
        cout << ind << ": ";
        ind++;
        if (itr.op == "=")
        {
            cout << itr.arg1 << " = " << itr.arg2 << "\n";
        }
        else if (itr.op == "=+")
        {
            cout << itr.arg1 << " = +" << itr.arg2 << "\n";
        }
        else if (itr.op == "=-")
        {
            cout << itr.arg1 << " = -" << itr.arg2 << "\n";
        }
        else if (itr.op == "=*")
        {
            cout << itr.arg1 << " = *(" << itr.arg2 << ")\n";
        }
        else if (itr.op == "*=")
        {
            cout << "*(" << itr.arg1 << ") = " << itr.res << "\n";
        }
        else if (itr.op == "=&")
        {
            cout << itr.arg1 << " = &(" << itr.arg2 << ")\n";
        }
        else if (itr.op == "&=")
        {
            cout << "&(" << itr.arg1 << ") = " << itr.res << "\n";
        }
        else if (itr.op == "=[]")
        {
            cout << itr.res << " = " << itr.arg1 << "[" << itr.arg2 << "]\n";
        }
        else if (itr.op == "goto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "goto " << itr.res << "\n";
        }
        else if (itr.op == "return")
        {
            cout << "return " << itr.res << "\n";
        }
        else if (itr.op == "ifGRTHgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " > " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "ifLESSEgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " <= " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "ifLESSgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " < " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "ifGRTHEgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " >= " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "ifEQgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " == " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "ifNEQgoto")
        {
            if (itr.res == "")
                itr.res = to_string(quadarray.size());
            cout << "if " << itr.arg1 << " != " << itr.arg2 << " goto " << itr.res << "\n";
        }
        else if (itr.op == "call")
        {
            if (itr.res == "")
            {
                cout << itr.op << " " << itr.arg1 << " , " << itr.arg2 << "\n";
            }
            else
            {
                cout << itr.res << " = " << itr.op << " " << itr.arg1 << " , " << itr.arg2 << "\n";
            }
        }
        else if (itr.op == "param")
        {
            cout << "param " << itr.arg1 << "\n";
        }

        else if (itr.op == "label")
        {
            cout << itr.res << " :\n";
        }
        else if (itr.op == "[]=")
        {
            cout << itr.arg1 << "[" << itr.arg2 << "] = " << itr.res << "\n";
        }
        else
        {
            cout << itr.res << " = " << itr.arg1 << " " << itr.op << " " << itr.arg2 << "\n";
        }
    }
    cout << ind << ": \n";
}
Quad::Quad(string op_, string arg1_, string arg2_, string res_) : op(op_), arg1(arg1_), arg2(arg2_), res(res_) {}

void emit(string op, string arg1, string arg2, string res)
{

    quadArr.quadarray.push_back(Quad(op, arg1, arg2, res));
}
// Next instruction function
int nextinstr()
{
    return quadArr.quadarray.size();
}

/*************TYPES************/
st_types_ *mergeType(st_types_ *tp, int sz)
{ //for arrays
    if (tp->type_ == NULL)
    {
        st_types_ *pr = new ARRAY(sz, tp);
        return pr;
    }
    else
    {
        tp->type_ = mergeType(tp->type_, sz);
        tp->width = tp->sz_ * tp->type_->width;
        tp->name_ = "array(" + to_string(tp->sz_) + "," + tp->type_->name_ + ")";
        return tp;
    }
}
