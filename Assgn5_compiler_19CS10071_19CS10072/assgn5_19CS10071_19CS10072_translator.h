#ifndef TRANSLATOR_INC
#define TRANSLATOR_INC
#define MAX_SYM 1000
#include<bits/stdc++.h>

#define MAXN 1000
using namespace std;
class st_types_ ;           // Symbol type like int,float,char,function,label
class SymbolTableRow;       // Class for each row of the symboltable
class Quad;                 // Class for individual quads
class SymbolTable;          // Class for every individual symbol table.
class QuadArray;            // Class for an 




int nextinstr();
/**
 * @brief Modelling the type hirarchy
 * st_type_ : Parent Type class
 */ 
class st_types_{
    public:
    int width;                        //size of data type
    string name_;                 //name of symbol
    int addr;                       //for use in case of pointer
    int sz_;                       //for use in array size number of elems
    st_types_* type_;              //for constructting type nesting
    st_types_* retType;            //for return type of function
    st_types_(int wd,string nme,st_types_* tp_ = NULL,int addR = 0,int sz=0);
};
/**
 * @brief : For managing the Integers
 */ 
class INT :public st_types_{
    public:
    INT();
} ;
/**
 * @brief : For managing void type
 */ 
class VOID :public st_types_{
    public:
    VOID();
} ;
/**
 * @brief : For managing float
 */ 
class FLOAT:public st_types_{
    public:
    FLOAT();
};
/**
 * @brief : For managing char
 */ 
class CHAR :public st_types_ {
    public:
    CHAR();
};
/**
 * @brief : For managing Pointers
 */ 
class PTR :public st_types_ {
    public:
    
    
    
    PTR(int addr = 0,st_types_* tp_ = NULL);

};
/**
 * @brief : For managing functions
 */ 
class FUNCTION :public st_types_ {
    public:
    FUNCTION();
};
/**
 * @brief : For managing Arrays
 */ 
class ARRAY :public st_types_ {
    public:
    
    
    ARRAY(int sz = 0,st_types_* tp_ = NULL);

};
/**
 * @brief Class to store each row of the Symbol Table
 * 
 */
class SymbolTableRow{
    
    public:
    SymbolTableRow(string name = "",st_types_* type = NULL,string initVal ="",int size = 0,int offSet = 0 ,SymbolTable* symTab = NULL);
    string name_;     //name
    st_types_* type_;        //type of symbol
    string initVal_;      //initialVal 
    int size_;
    int offSet_;
    int isGlobal;//1 if this is a global variables
    SymbolTable* nestedTable_;
    int ARoffset;
    

};
/**
 * @brief Quad Array Class
 * 
 */
class QuadArray{
    public:
    vector<Quad> quadarray;
    
    void print();

};

//Emit function
void emit(string op,string arg1="",string arg2="",string res="");

/**
 * @brief Quad class 
 */ 
class Quad{    
    public:
    string op;
    string arg1;
    string arg2;
    string res;  
    Quad(string op_,string arg1_,string arg2_,string res_) ; 
};
/**
 * @brief Symbol table class
 * 
 */
class SymbolTable
{
    public:
    SymbolTable() ;//constructor for create symbol table
    SymbolTableRow symtab[MAX_SYM];
    SymbolTableRow* lookup(string);
    SymbolTableRow* peek(string);//to peek if found return pointer else return NULL
    int n;//number of symbols
    SymbolTable* par;
    void update(SymbolTableRow*,st_types_*,int offset_);//width obtained from type expression
    void update(SymbolTableRow*,SymbolTableRow);
    void print(); //TO print the symbol table
    static int STcnt;  //Stores number of symbol tables
    string name;   //Name of symbol table auto generated
    int offset;   //offset of Symbol Table
    void lazySetOffset();//TO lazily rectify all offsets after Symbol table has been constructed

    //for use during determining the activation records
    vector<SymbolTableRow*> params;
    vector<SymbolTableRow*> locals;
    int paramOffset;//Total size of the parameters
    //This is more effiecient than onlineupdates
    
};
/**
 *  @brief : generate based on (type,init_val set to empty by defasult) 
 */
SymbolTableRow* gentemp(st_types_* tp,string init = "");

//To insert a value to the pointed symbol table
void insert(SymbolTable* sm,string name,st_types_* type,string val);
void insert(SymbolTable* sm,SymbolTableRow* row);

/**
 * @brief : Returns a list with one elem ind
 */ 
list<int> makelist(int ind);
/**
 * @brief : For merging two lists
 */ 
list<int> merge(list<int>,list<int>);
/**
 * @brief : For merging two types and construct type expression
 */ 
st_types_* merge(st_types_*,st_types_*);
/**
 * @brief : For backpatching
 */ 
void backpatch(list<int>& p,int target);

/******************GRAMMER ATTRIBUTES*************************/

//base class
/**
 * @brief : 
 */ 
class exprr{
    public:
    string attrType;  //array or ptr or int.... basically the type which the attribute is modelling attribute as string
    int isBool;
    SymbolTableRow *loc;  //temporary for accessing index ;acts as location for exprAttr type
    SymbolTableRow *array;  //location to base address
    st_types_* Type;  //Nested type structure to model multidimentional arrays
    list<int> trueList,falseList;//for use in exprAttr
    exprr(string str = "",int isBool_ = 0) :attrType(str),isBool(isBool_) {}
};

/**
 * @brief for normal variables
 * 
 */
class exprAttr:public exprr{
    public:        
    
    exprAttr() :exprr("exprr") {}
};
/**
 * @brief For pointers and arrays
 * 
 */

class arrayAttr:public exprr{
    
    public:    
    arrayAttr(string str = "array") :exprr(str) {}
};
/**
 * @brief : For modelling the statements
 */ 
class statementAttr{
    public:
    list<int> nextList; 
    SymbolTable* ST;//for compuound statement
}; 
/**
 * @brief : For modelling blocks of code enclosed in {}
 */
class blockAttr{
    public:
    SymbolTable* ST;
    SymbolTableRow* loc;//if this is a function else null
    blockAttr() : ST(NULL),loc(NULL) {}    
};
/**
 * @brief : The marker attribute M used in FOR ,WHILE ..
 */ 
class markerAttr{
    public:
    int instr;  //instruction pointed just ahead
};
/**
 * @brief : For modelling the declarators
 */ 
class declaratorAttr{
    public:
    int width;       //width of the variable pointed by 
    st_types_* type; //type of the variable pointed by
    SymbolTableRow* loc; //location in symbol table pointed by

};
/**
 * @brief : For modelling arguments
 */ 
class argAttr{
    public:
    vector<SymbolTableRow*> params;//list of aprameters in function argument
};
/**
 * @brief: For modelling constants
 */ 
class constAttr{
    public:
    string val;  //constant value
    st_types_ *tp;  //type
    constAttr(st_types_* tp_,string v) : tp(tp_),val(v) {}
};



class attrM{
    public:
    int instr;
};
SymbolTable* createSymTab();//To create and return a new symbol table

//Casting
int typecheck1(exprr* &a,exprr* &b);
int typecheck2(exprr* &a,st_types_* tp);//Check if arg2 can be converted to arg1 and convert if so
int typecheck2(declaratorAttr* &a,st_types_* tp);
void convBooltoInt(exprr*);
void convInttoBool(exprr* );
exprr* convert(exprr*, st_types_* );//for type casting

st_types_* mergeType(st_types_* tp,int sz);

/**
 * @brief Global Variables
 */
 
extern SymbolTable* ST;// Current Symbol Table
extern SymbolTable* globalST;
extern QuadArray quadArr;//Global Quad array
extern int cnt;//global counter for number of temporaries generated
extern st_types_* lastType;//global variable storing last encounteres type
//extern int offset;//global counter for offset
extern vector<SymbolTable*> symTabList;//List of all symbols tables
extern int isConditional;//If a conditional block like while loop or if etc has started

extern map<string,int> labels;
extern map<string,string> asmLabels;
/**
 * @brief : Global functions and variables for target code generation
 */ 

//vector<SymbolTableRow*> globalVar;//global variables
/**
 * @brief:function to flatten the symbol tables merge unnecessary symbol tables etc
 * This also computes the activation records
 * 
 */ 
void flattenST();







//Error Exception
class typeError : public exception {
    public:
   const char * what () const throw () {
      return "Type Error\n";
   }
};

class Error: public exception{
     public:
    string errTxt;
    Error(string errorMess = "Semantic Error") : errTxt(errorMess) {}
   const char * what () const throw () {
      return errTxt.c_str();
   }
};
#endif
/****
 *           TARGET TRANSLATOR FUNCTIONS
 * 
 */ 
void genAsm(string fName);
void genFuncEpilogue(SymbolTableRow* curr);
void genFuncPrologue(SymbolTableRow* curr);

/*******************************************************************************
 * 
 * 
  A instrc having a label means that the label appears just above that quad in the asm file

 */
