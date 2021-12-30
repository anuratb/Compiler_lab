#include "assgn5_19CS10071_19CS10072_translator.h"
using namespace std;
/***********Helper functions***********/
int isNumber(string S)
{
    for (auto itr : S)
        if (!isdigit(itr))
            return 0;
    return 1;
}
//for target code generation

/****************For Target Code Generation***************************/

/********
 * 
 *          |Param| -> from caller
 *          -------     |
 *          |Ret  |     |
 *          -------     |   Stack 
 *      0-- |rbp  |    \|/
 *          -------
 *          |locals| -->for callee
 * 
 */
void setARoffsets(SymbolTableRow *sym)
{                        //for some function
    int prevOffset = 16; //to account for rbp and ra
    if (sym->type_->retType != NULL)
        prevOffset += sym->type_->retType->width; //for non void function
    SymbolTable *curr = sym->nestedTable_;
    for (int i = curr->params.size() - 1; i >= 0; i--)
    {

        curr->params[i]->ARoffset = prevOffset;
        prevOffset += curr->params[i]->size_;
    }
    prevOffset = 0;
    for (int i = 0; i < curr->n; i++)
    {
        if (curr->symtab[i].ARoffset == 0)
        {
            prevOffset -= curr->symtab[i].size_;
            curr->symtab[i].ARoffset = prevOffset;
        }
    }
}
/**
 * @brief:
 * The basic approach is that in our last assignment we implemented as
 * 
 * Global table
 * Func1 param_table
 * <opt>Func1 body
 * <opt> Nested blocks of Func1 body
 * ....Func2 Func3 serially as in order of declaration globally
 * We make use of this format to flatten in O(n) In total 
 */
void flattenST()
{
    vector<int> functions;
    vector<SymbolTable *> newSymTab;
    newSymTab.push_back(globalST);
    for (int i = 0; i < globalST->n; i++)
    {
        if (globalST->symtab[i].type_->name_ == "function")
        {
            functions.push_back(i);
        }
    }
    int ind = 1;
    // cout<<"0::\n";
    for (auto itr : functions)
    {

        //Compute the activation records

        //TODO
        //cout<<itr<<"\n";
        SymbolTable *param = symTabList[ind]; //param list of current function
        param->paramOffset = 0;
        for (int i = 0; i < param->n; i++)
        {
            param->params.push_back(param->symtab + i);
            param->paramOffset += param->symtab[i].size_;
        }
        newSymTab.push_back(param);
        ind++;
        if (ind < symTabList.size() && symTabList[ind]->par == param)
        { //check if next symbol table is the body of this current function
            //merge into one symbol table
            //cout<<"1::\n";
            // for(int j=0;j<symTabList[ind]->n;j++){
            //cout<<"1::\n";
            //   param->symtab[param->n++] = symTabList[ind]->symtab[j];
            // }
            // ind++;//increment to next table
            //cout<<"2::\n";
            while (ind < symTabList.size() && (symTabList[ind]->par != globalST))
            {
                for (int i = 0; i < symTabList[ind]->n; i++)
                {
                    param->locals.push_back(symTabList[ind]->symtab + i);
                    param->symtab[param->n++] = symTabList[ind]->symtab[i];
                }
                ind++;
            }
            //cout<<"3::\n";
        }
        else
        { //fucntion body abset
        }
    }
    symTabList = newSymTab;
    for (auto itr : functions)
    {
        setARoffsets(globalST->symtab + itr);
    }
    /******** FOR DEBUG
    for(auto itr:functions){
        //cout<<"0::\n";
        cout<<"Params of "<<globalST->symtab[itr].name_<<"\n";
        for (auto it:globalST->symtab[itr].nestedTable_->params){
            cout<<it->name_<<"\n";
        }
        cout<<"Locals of "<<globalST->symtab[itr].name_<<"\n";
        for (auto it:globalST->symtab[itr].nestedTable_->locals){
            cout<<it->name_<<"\n";
        }
    }*/
}
/**
 * @brief : To generate function fucntion prologue
 */
void genFuncPrologue(SymbolTableRow *curr)
{

    cout << "\t.globl " << curr->name_ << "\n";
    cout << "\t.type " << curr->name_ << ", @function\n";
    cout << curr->name_ << ":\n";
    cout << ".LFB_" << curr->name_ << ":\n"; //function begin
    cout << "\t.cfi_startproc\n";
    //push rbp
    cout << "\tpush %rbp\n";
    cout << "\t.cfi_def_cfa_offset 8\n";
    cout << "\t.cfi_offset 5, -8\n";
    cout << "\tmovq %rsp,%rbp\n";
    cout << "\t.cfi_def_cfa_register 5\n";
    int retWidth = 0;
    if (curr->type_->retType != NULL)
        retWidth = curr->type_->retType->width;
    int paramWidth = curr->nestedTable_->paramOffset;

    int bodyWidth = curr->nestedTable_->offset - paramWidth;
    // for(auto itr:curr->nestedTable_->locals){
    //   bodyWidth+=itr->size_;
    //}
    //Allocate memory for storing locals
    cout << "\tsubq $" << bodyWidth << ", %rsp\n";
    //Now the variables will be accessible from the stack as in the order of the symbol table 0 indexed at rbp
    //Parameters will be saved from caller's side
}

/**
 * @brief : To generate function fucntion epilogue, caled only when finding a 
 * Protocaol : When you will see return in TAC then you will write the return values and goto the epi;lgue
 */
void genFuncEpilogue(SymbolTableRow *curr)
{

    //cout << "\tjmp .FE2_" + curr->name_ << "\n";
    cout << ".FRT_" + curr->name_ << ":\n"; //begin function return sequence
    //reset stack
    int paramWidth = curr->nestedTable_->paramOffset;
    int bodyWidth = curr->nestedTable_->offset - paramWidth;
    cout << "\taddq $" << bodyWidth << ", %rsp\n";
    //Leave and return
    cout << "\tleave\n";
    cout << "\t.cfi_restore 5\n";
    cout << "\t.cfi_def_cfa 4, 4\n";
    cout << "\tret\n";
    cout << "\t.cfi_endproc\n";
    //cout << ".FE2_" + curr->name_ << ":\n";
}
/**
 * 
 * @brief: to handle Global variables
 */
set<SymbolTableRow *> globals; //set of all global symbol variables
void handleGlobals()
{
    for (int i = 0; i < globalST->n; i++)
    {
        if (globalST->symtab[i].type_->name_ == "int")
        {
            globalST->symtab[i].isGlobal = 1;
            cout << "\t.globl	" << globalST->symtab[i].name_ << "\n";
            cout << "\t.data\n";
            cout << "\t.align 4\n";
            cout << "\t.type	" << globalST->symtab[i].name_ << ", @object\n";
            cout << "\t.size	" << globalST->symtab[i].name_ << ", " << globalST->symtab[i].size_ << "\n";
            cout << globalST->symtab[i].name_ << ":\n";
            if (globalST->symtab[i].initVal_ == "")
                globalST->symtab[i].initVal_ = "0";
            cout << "\t.long  " << globalST->symtab[i].initVal_ << "\n";
            globals.insert(globalST->symtab + i);
        }
        else if (globalST->symtab[i].type_->name_ == "char")
        {
            globalST->symtab[i].isGlobal = 1;
            cout << "\t.globl	" << globalST->symtab[i].name_ << "\n";
            cout << "\t.data\n";
            cout << "\t.type	" << globalST->symtab[i].name_ << ", @object\n";
            cout << "\t.size	" << globalST->symtab[i].name_ << ", " << globalST->symtab[i].size_ << "\n";
            cout << globalST->symtab[i].name_ << ":\n";
            cout << "\t.byte  " << (int)globalST->symtab[i].initVal_[0] << "\n";
            globals.insert(globalST->symtab + i);
        }
    }
}
/**
 * Add all stirn gliterals to global variables
 * 
 */
void handleStrings()
{
    for (auto currSymbolTable : symTabList)
    {
        for (int i = 0; i < currSymbolTable->n; i++)
        {
            if (currSymbolTable->symtab[i].type_->name_ == "ptr(char)" && currSymbolTable->symtab[i].initVal_.size() > 0)
            {
                currSymbolTable->symtab[i].isGlobal = 1;
                cout << currSymbolTable->symtab[i].name_ << ":\n";
                cout << "\t.string  " << currSymbolTable->symtab[i].initVal_ << "\n";
                globals.insert(currSymbolTable->symtab + i);
            }
        }
    }
}
//To generate assembly code
void genAsm(string fName)
{
    freopen("err.txt", "w", stderr); //for printing errors durring debugging
    cerr << "Errors\n";
    freopen((fName + ".s").c_str(), "w", stdout);

    //redirect output to asm file
    /**
     * 
     * 
    1.Print the constants
    2.loop over the quad array
    
    //for each function first call detected when you get a quad with op = "label"
     |
     |
    \|/
    else if(itr.op=="label"){
            cout<<itr.res<<" :\n";
        }
    Then call lookup to get the SymbolTableRow* and can genFuncPrologue with ind = current quad array index


    Write the function body by directly translating from 3 address code -->Refer to the quad array print fucntion

    Then similarly as in prologue call epilogue

    To call func just updtae return in memory and jump to .FRT_<func_name>

    **/
    cout << "\t.file	"
         << "\"" << fName << "\""
         << "\n\t.text\n";
    handleGlobals();

    cout << "\t.section\t.rodata\n";
    handleStrings();
    cout << "\t.text\n";
    SymbolTable *currST = globalST;
    for (int i = 0; i < quadArr.quadarray.size(); i++)
    {

        string temp = "";
        if (quadArr.quadarray[i].op.size() >= 4)
            temp = quadArr.quadarray[i].op.substr(quadArr.quadarray[i].op.size() - 4, 4);
        if (temp == "goto")
        {
            if (quadArr.quadarray[i].res == "")
                quadArr.quadarray[i].res = to_string(nextinstr());
            asmLabels[quadArr.quadarray[i].res] = ".LN" + quadArr.quadarray[i].res;
        }
    }

    for (int i = 0; i < quadArr.quadarray.size(); i++)
    {
        cerr << i << "\n";
        if (asmLabels.find(to_string(i)) != asmLabels.end())
            cout << asmLabels[to_string(i)] << ":\n";
        Quad curr = quadArr.quadarray[i];
        if (curr.op == "label")
        {
            if (curr.res == "printInt" || curr.res == "readInt" || curr.res == "printStr")
                continue;
            SymbolTableRow *src = globalST->lookup(curr.res);
            currST = src->nestedTable_;
            cerr << "0::\n";
            genFuncPrologue(src);
            i++;
            while (i < quadArr.quadarray.size())
            {
                cerr << i << "\n";

                curr = quadArr.quadarray[i];
                if (curr.op == "label")
                {
                    i--;
                    break;
                }
                else
                {
                    if (asmLabels.find(to_string(i)) != asmLabels.end())
                        cout << asmLabels[to_string(i)] << ":\n";
                    //function body
                    if (curr.op == "=" || curr.op == "=+")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        if (arg1->isGlobal)
                        {
                            i++;

                            if (i == quadArr.quadarray.size())
                            {
                                cout << ".LN" << i << ":\n";
                            }
                            continue;
                        }
                        if (isNumber(curr.arg2))
                        {
                            //Constant assignment

                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	$" << curr.arg2 << ", " << (arg1->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	$" << curr.arg2 << ", " << arg1->ARoffset << "(%rbp)\n";
                            }
                        }
                        else
                        {
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                            if (arg1->size_ == 4)
                            {
                                if (arg2->isGlobal)
                                {
                                    cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                                }
                                else
                                {
                                    cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                                }
                                if (arg1->isGlobal)
                                {
                                    cout << "\tmovl	\%eax, " << (arg1->name_) << "(%rip)\n";
                                }
                                else
                                {
                                    cout << "\tmovl	\%eax, " << arg1->ARoffset << "(%rbp)\n";
                                }
                            }
                            else
                            {
                                //arg1.size = 8 for pointer (rbp,rax etx are 8 byte)
                                if (arg2->isGlobal)
                                {
                                    cout << "\tmovq	" << arg2->name_ << "(%rip), \%rax\n";
                                }
                                else
                                {
                                    cout << "\tmovq	" << arg2->ARoffset << "(%rbp), \%rax\n";
                                }
                                if (arg1->isGlobal)
                                {
                                    cout << "\tmovq	\%rax, " << (arg1->name_) << "(%rip)\n";
                                }
                                else
                                {
                                    cout << "\tmovq	\%rax, " << arg1->ARoffset << "(%rbp)\n";
                                }
                            }
                        }

                        //cout<<curr.arg1<<" = "<<curr.arg2<<"\n";
                    }
                    else if (curr.op == "=-")
                    {
                        if (isNumber(curr.arg2))
                        {
                            //Constant assignment
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	$-" << curr.arg2 << ", " << (arg1->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	$-" << curr.arg2 << ", " << arg1->ARoffset << "(%rbp)\n";
                            }
                        }
                        else
                        {
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                            if (arg2->isGlobal)
                            {
                                cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                            }
                            cout << "\tneg\t\%eax\n";
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	\%eax, " << (arg1->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	\%eax, " << arg1->ARoffset << "(%rbp)\n";
                            }
                        }
                        //cout<<curr.arg1<<" = -"<<curr.arg2<<"\n";
                    }
                    else if (curr.op == "=*")
                    {

                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);

                        if (arg2->isGlobal)
                        {
                            cout << "\tmovq	" << arg2->name_ << "(%rip), \%rax\n";
                        }
                        else
                        {
                            cout << "\tmovq	" << arg2->ARoffset << "(%rbp), \%rax\n";
                        }
                        cout << "\tmovl\t(%rax),%edx\n";
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl	%edx, " << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovl	%edx, " << arg1->ARoffset << "(%rbp)\n";
                        }

                        //cout<<curr.arg1<<" = *("<<curr.arg2<<")\n";
                    }
                    else if (curr.op == "*=")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *res = currST->lookup(curr.res);

                        if (res->isGlobal)
                        {
                            cout << "\tmovl	" << res->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << res->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovq	" << arg1->name_ << "(%rip), \%rdx\n";
                        }
                        else
                        {
                            cout << "\tmovq	" << arg1->ARoffset << "(%rbp), \%rdx\n";
                        }
                        cout << "\tmovl\t%eax,(%rdx)\n";
                        //cout<<"*("<<curr.arg1<<") = "<<curr.res<<"\n";
                    }
                    else if (curr.op == "=&")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tleaq	" << arg2->name_ << "(%rip), \%rax\n";
                        }
                        else
                        {
                            cout << "\tleaq	" << arg2->ARoffset << "(%rbp), \%rax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovq	\%rax, " << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovq	\%rax, " << arg1->ARoffset << "(%rbp)\n";
                        }
                        //cout<<curr.arg1<<" = &("<<curr.arg2<<")\n";
                    }
                    else if (curr.op == "=[]")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        cout << "\tcltq\n";
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl\t" << (arg1->name_) << "(%rip,%rax) , %edx\n";
                        }
                        else
                        {
                            cout << "\tmovl\t" << arg1->ARoffset << "(%rbp,%rax) , %edx\n";
                        }
                        SymbolTableRow *res = currST->lookup(curr.res);
                        //cout << "\tmovl\t(%rax),%edx\n";
                        if (res->isGlobal)
                        {
                            cout << "\tmovl\t\%edx, " << (res->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovl\t\%edx, " << res->ARoffset << "(%rbp)\n";
                        }
                        //cout << curr.res << " = " << curr.arg1 << "[" << curr.arg2 << "]\n";
                    }
                    else if (curr.op == "goto")
                    {
                        cout << "\tjmp\t" << asmLabels[curr.res] << "\n";
                        //if(curr.res=="") curr.res = to_string(quadarray.size());
                        //cout<<"goto "<<curr.res<<"\n";
                    }
                    else if (curr.op == "return")
                    {
                        if (curr.res != "")
                        { //non void
                            SymbolTableRow *res = currST->lookup(curr.res);
                            if (res->isGlobal)
                            {
                                cout << "\tmovl	" << res->name_ << "(%rip), \%eax\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << res->ARoffset << "(%rbp), \%eax\n";
                            }
                            cout << "\tmovl\t%eax," << src->type_->retType->width + 16 << "(%rbp)\n";
                        }
                        cout << "\tjmp\t"
                             << ".FRT_" + src->name_ << "\n"; //jump to end of function
                                                              // cout<<"return "<<curr.res<<"\n";
                    }
                    else if (curr.op == "ifGRTHgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tjg\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //    curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " > " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "ifLESSEgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tjle\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //  curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " <= " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "ifLESSgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tjl\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //  curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " <= " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "ifGRTHEgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tjge\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //  curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " <= " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "ifEQgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tje\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //  curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " <= " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "ifNEQgoto")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tcmp\t%eax," << (arg1->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tcmp\t%eax," << arg1->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tjne\t" << asmLabels[curr.res] << "\n";
                        //if (curr.res == "")
                        //  curr.res = to_string(quadarray.size());
                        //cout << "if " << curr.arg1 << " <= " << curr.arg2 << " goto " << curr.res << "\n";
                    }
                    else if (curr.op == "call")
                    {
                        cerr << curr.arg1 << "\n";
                        SymbolTableRow *func = globalST->lookup(curr.arg1);
                        if (curr.arg1 == "printInt")
                        {
                            cout << "\tmovl\t(%rsp),%edi\n";
                            cout << "\tcall\tprintInt\n";
                            cout << "\taddq\t$4,%rsp\n"; //pop the params no return val
                        }
                        else if (curr.arg1 == "readInt")
                        {
                            cout << "\tmovq\t(%rsp),%rdi\n";
                            cout << "\tcall\treadInt\n";
                            cout << "\taddq\t$8,%rsp\n"; //pop the params no return val
                        }
                        else if (curr.arg1 == "printStr")
                        {
                            cout << "\tmovq\t(%rsp),%rdi\n";
                            cout << "\tcall\tprintStr\n";
                            cout << "\taddq\t$8,%rsp\n"; //pop the params no return val
                        }
                        else if (curr.res == "")
                        {
                            cerr << "0::\n";
                            int ValPop = func->nestedTable_->paramOffset;
                            if (func->type_->retType != NULL)
                                ValPop += func->type_->retType->width;
                            cout << "\tcall\t" << func->name_ << "\n";
                            //void so no target
                            cout << "\taddq\t$" << ValPop << ",%rsp\n"; //pop return val and params
                            //    cout << curr.op << " " << curr.arg1 << " , " << curr.arg2 << "\n";
                        }
                        else
                        {
                            //push return val
                            SymbolTableRow *res = currST->lookup(curr.res);
                            cout << "\tsubq\t$" << func->type_->retType->width << ",%rsp\n"; //to be wriiten to by the calee
                            int ValPop = func->nestedTable_->paramOffset;

                            if (func->type_->retType != NULL)
                                ValPop += func->type_->retType->width;
                            cout << "\tcall\t" << func->name_ << "\n";
                            //mov to target
                            cout << "\tmovl\t" << func->type_->retType->width << "(%rsp),\%eax\n"; //mov return value to eax
                            if (res->isGlobal)
                            {
                                cout << "\tmovl\t\%eax, " << (res->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl\t\%eax, " << res->ARoffset << "(%rbp)\n";
                            }
                            cout << "\taddq\t$" << ValPop << ",%rsp\n"; //pop return val and params
                                                                        //  cout << curr.res << " = " << curr.op << " " << curr.arg1 << " , " << curr.arg2 << "\n";
                        }
                    }
                    else if (curr.op == "param")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        //copy to register and push parameters to the stack for next function call
                        //cout<<arg1->name_<<"\n";
                        cout << "\tsubq\t$" << arg1->size_ << ",%rsp\n";
                        if (arg1->isGlobal)
                        {
                            if (arg1->size_ == 8)
                            {
                                cout << "\tleaq\t" << (arg1->name_) << "(%rip),%rax\n";
                            }
                            else
                                cout << "\tmovl\t" << (arg1->name_) << "(%rip),%eax\n";
                        }
                        else
                        {
                            if (arg1->size_ == 8)
                                cout << "\tmovq\t" << arg1->ARoffset << "(%rbp),%rax\n";
                            else
                                cout << "\tmovl\t" << arg1->ARoffset << "(%rbp),%eax\n";
                        }
                        if (arg1->size_ == 8)
                            cout << "\tmovq\t\%rax,(%rsp)\n";
                        else
                            cout << "\tmovl\t\%eax,(%rsp)\n";

                        //cout << "param " << curr.arg1 << "\n";
                    }
                    else if (curr.op == "[]=")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                        }
                        cout << "\tcltq\n"; //extend to rax

                        SymbolTableRow *res = currST->lookup(curr.res);

                        if (res->isGlobal)
                        {
                            cout << "\tmovl\t " << (res->name_) << "(%rip),%edx\n";
                        }
                        else
                        {
                            cout << "\tmovl\t " << res->ARoffset << "(%rbp),%edx\n";
                        }
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl\t%edx," << (arg1->name_) << "(%rip,%rax)\n";
                        }
                        else
                        {
                            cout << "\tmovl\t%edx," << arg1->ARoffset << "(%rbp,%rax)\n";
                        }
                        //cout << "\tmovl\t%edx,(%rax)\n";
                        //cout << curr.arg1 << "[" << curr.arg2 << "] = " << curr.res << "\n";
                    }
                    else if (curr.op == "+")
                    {
                        if (curr.arg2 == "1" && curr.arg1 == curr.res)
                        {
                            //increment
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                            }
                            cout << "\tinc     \%eax\n";
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	\%eax, " << (arg1->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	\%eax, " << arg1->ARoffset << "(%rbp)\n";
                            }
                        }
                        else
                        {
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                            SymbolTableRow *res = currST->lookup(curr.res);
                            //load from memory to registers
                            if (arg2->type_->type_ != NULL)
                                swap(arg1, arg2);
                            if (arg1->type_->name_.size() >= 5 && arg1->type_->name_.substr(0, 5) == "array")
                            {
                                //pointer arithmetic
                                if (arg2->isGlobal)
                                {
                                    cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                                }
                                else
                                {
                                    cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                                }
                                cout << "\tcltq\n";
                                if (arg1->isGlobal)
                                {
                                    cout << "\tleaq\t" << arg1->name_ << "(%rip,%rax) , %rdx\n";
                                }
                                else
                                {
                                    cout << "\tleaq\t" << arg1->ARoffset << "(%rbp,%rax), %rdx\n";
                                }
                                if (res->isGlobal)
                                {
                                    cout << "\tmovq	\%rdx, " << (res->name_) << "(%rip)\n";
                                }
                                else
                                {
                                    cout << "\tmovq	\%rdx, " << res->ARoffset << "(%rbp)\n";
                                }
                            }
                            else if (arg1->type_->name_.size() >= 3 && arg1->type_->name_.substr(0, 3) == "ptr")
                            {
                                if (arg2->isGlobal)
                                {
                                    cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                                }
                                else
                                {
                                    cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                                }
                                cout << "\tcltq\n";
                                if (arg1->isGlobal)
                                {
                                    cout << "\taddq\t" << arg1->name_ << "(%rip) , %rax\n";
                                }
                                else
                                {
                                    cout << "\taddq\t" << arg1->ARoffset << "(%rbp), %rax\n";
                                }
                                if (res->isGlobal)
                                {
                                    cout << "\tmovq	\%rax, " << (res->name_) << "(%rip)\n";
                                }
                                else
                                {
                                    cout << "\tmovq	\%rax, " << res->ARoffset << "(%rbp)\n";
                                }
                            }
                            else
                            {
                                if (arg1->isGlobal)
                                {
                                    cout << "\tmovl	" << arg1->name_ << "(%rip), \%edx\n";
                                }
                                else
                                {
                                    cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%edx\n";
                                }
                                if (arg2->isGlobal)
                                {
                                    cout << "\tmovl	" << arg2->name_ << "(%rip), \%eax\n";
                                }
                                else
                                {
                                    cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%eax\n";
                                }
                                //do the operation
                                cout << "\taddl	\%edx, \%eax\n";
                                //load from register to memory
                                if (res->isGlobal)
                                {
                                    cout << "\tmovl	\%eax, " << (res->name_) << "(%rip)\n";
                                }
                                else
                                {
                                    cout << "\tmovl	\%eax, " << res->ARoffset << "(%rbp)\n";
                                }
                            }
                        }

                        //cout<<itr.res<<" = "<<itr.arg1<<" "<<itr.op<<" "<<itr.arg2<<"\n";
                    }
                    else if (curr.op == "-")
                    {

                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        SymbolTableRow *res = currST->lookup(curr.res);
                        //load from memory to registers
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                        }
                        if (arg2->isGlobal)
                        {
                            cout << "\tmovl	" << arg2->name_ << "(%rip), \%edx\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%edx\n";
                        }
                        //do the operation
                        cout << "\tsubl	\%edx, \%eax\n";
                        //load from register to memory
                        if (res->isGlobal)
                        {
                            cout << "\tmovl	\%eax, " << (res->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovl	\%eax, " << res->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tmovl	$0, \%eax\n";
                    }
                    else if (curr.op == "/")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        SymbolTableRow *res = currST->lookup(curr.res);
                        //load from memory to registers
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                        }
                        
                        cout << "\tmovl\t$0,%edx\n";
                        if (arg2->isGlobal)
                        {
                            cout << "\tidivl	" << arg2->name_ << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tidivl	" << arg2->ARoffset << "(%rbp)\n";
                        }

                        //load from register to memory
                        if (res->isGlobal)
                        {
                            cout << "\tmovl	\%eax, " << (res->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovl	\%eax, " << res->ARoffset << "(%rbp)\n";
                        }
                        
                    }
                    else if (curr.op == "*")
                    {
                        if (curr.arg2 == "4")
                        {
                            //shift by 2 bits
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            SymbolTableRow *res = currST->lookup(curr.res);
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                            }
                            cout << "\tshl\t$2,%eax\n";
                            //save in destination
                            if (res->isGlobal)
                            {
                                cout << "\tmovl	\%eax, " << (res->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	\%eax, " << res->ARoffset << "(%rbp)\n";
                            }
                            cout << "\tmovl	$0, \%eax\n";
                        }
                        else
                        {
                            SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                            SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                            SymbolTableRow *res = currST->lookup(curr.res);

                            //load from memory to registers
                            if (arg1->isGlobal)
                            {
                                cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                            }
                            if (arg2->isGlobal)
                            {
                                cout << "\tmovl	" << arg2->name_ << "(%rip), \%edx\n";
                            }
                            else
                            {
                                cout << "\tmovl	" << arg2->ARoffset << "(%rbp), \%edx\n";
                            }
                            //do the operation

                            cout << "\timul\t%edx\n";

                            //load from register to memory
                            if (res->isGlobal)
                            {
                                cout << "\tmovl	\%eax, " << (res->name_) << "(%rip)\n";
                            }
                            else
                            {
                                cout << "\tmovl	\%eax, " << res->ARoffset << "(%rbp)\n";
                            }
                            cout << "\tmovl	$0, \%eax\n";
                        }
                    }
                    else if (curr.op == "%")
                    {
                        SymbolTableRow *arg1 = currST->lookup(curr.arg1);
                        SymbolTableRow *arg2 = currST->lookup(curr.arg2);
                        SymbolTableRow *res = currST->lookup(curr.res);
                        //load from memory to registers
                        if (arg1->isGlobal)
                        {
                            cout << "\tmovl	" << arg1->name_ << "(%rip), \%eax\n";
                        }
                        else
                        {
                            cout << "\tmovl	" << arg1->ARoffset << "(%rbp), \%eax\n";
                        }
                        cout << "\tmovl\t$0,%edx\n";
                        if (arg2->isGlobal)
                        {
                            cout << "\tidivl	" << arg2->name_ << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tidivl	" << arg2->ARoffset << "(%rbp)\n";
                        }

                        //load from register to memory
                        if (res->isGlobal)
                        {
                            cout << "\tmovl	\%edx, " << (res->name_) << "(%rip)\n";
                        }
                        else
                        {
                            cout << "\tmovl	\%edx, " << res->ARoffset << "(%rbp)\n";
                        }
                        cout << "\tmovl	$0, \%eax\n";
                    }
                }
                i++;
                if (i == quadArr.quadarray.size())
                {
                    cout << ".LN" << i << ":\n";
                }
            }
            genFuncEpilogue(src);
        }
    }
    cout << "\t.size	main, .-main\n\t.ident	\"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0\"\n";
    cout << "\t.section	.note.GNU-stack,\"\",@progbits\n";
}
