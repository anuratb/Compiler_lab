
/******************GRAMMER ATTRIBUTES*************************/

//base class
/**
 * @brief : 
 */ 
 /*
class expr{
    public:
    string attrType;  //array or ptr or int.... basically the type which the attribute is modelling attribute as string
    expr(string str = "") :attrType(str) {}
};
*/
/**
 * @brief for normal variables
 * 
 */
 /*
class exprr:public expr{
    public:
    SymbolTableRow *loc;    
    st_types_* Type;
    list<int> trueList,falseList;
    exprr() :expr("expr") {}
};
*/
/**
 * @brief For pointers and arrays
 * 
 */
/*
class exprr:public expr{
    
    public:
    SymbolTableRow *loc;  //temporary for accessing index
    SymbolTableRow *array;  //location to base address
    st_types_* Type;  //Nested type structure to model multidimentional arrays
    exprr(string str = "array") :expr(str) {}
};
*/
/**
 * @brief : For modelling the statements
 */ 
 /*
class statementAttr{
    public:
    list<int> nextList; 
}; 
*/
/**
 * @brief : For modelling blocks of code enclosed in {}
 */
 /*
class blockAttr{
    public:
    SymbolTable* ST;
    SymbolTableRow* loc;//if this is a function else null
    blockAttr() : ST(NULL),loc(NULL) {}    
};
*/
/**
 * @brief : The marker attribute M used in FOR ,WHILE ..
 */ 
//class markerAttr{
//    public:
//    int instr;  //instruction pointed just ahead
//};
///**
// * @brief : For modelling the declarators
// */ 
//class declaratorAttr{
//    public:
//    int width;       //width of the variable pointed by 
//    st_types_* type; //type of the variable pointed by
//    SymbolTableRow* loc; //location in symbol table pointed by
//
//};
///**
// * @brief : For modelling arguments
// */ 
//class argAttr{
//    public:
//    vector<SymbolTableRow*> params;//list of aprameters in function argument
//};
///**
// * @brief: For modelling constants
// */ 
//class constAttr{
//    public:
//    string val;  //constant value
//    st_types_ *tp;  //type
//    constAttr(st_types_* tp_,string v) : tp(tp_),val(v) {}
//};

/*
identifier_opt : Pointer to a symbol found or created just now
function_definition : block modelling the function as f (..)  {...} and thus managing scope
changeScope : Used like ,sort of a moarker attribute to indicate where change of scope is occurring 
               say like a loop nesting or a function defining

direct_declarator
declarator
initializer
init_declarator    : All these have been modelled with declarator attributes  

constant : Modelled as a constant with constant attributes as defined in constAttr class

pointer
pointer_opt : Managed as a pointer to the symbol

M : Marker attribute Descipting of attributes in class  markerAttr


primary_expression
multiplicative_expression
additive_expression
shift_expression
relational_expression
equality_expression
AND_expression
exclusive_OR_expression
inclusive_OR_expression
logical_AND_expression
logical_OR_expression
conditional_expression
assignment_expression
expression
expression_opt
assignment_expression_opt   :All have been moddeled as normal expressions


postfix_expression
unary_expression
cast_expression  :Array expresssion described in exprr class


argument_expression_list_opt
argument_expression_list          :function arguments as in argAttr



block_item
expression_statement
selection_statement
iteration_statement
jump_statement
statement
labeled_statement
compound_statement
block_item_list_opt
block_item_list
N                        : All modelled as statements as in class statementAttr

*/







%{

    #include<bits/stdc++.h>
    #include "assgn5_19CS10071_19CS10072_translator.h"
    using namespace std;
    extern int yylex();
    extern char* yytext;
    extern int lineNo;
    void yyerror(char* s);
    /**
     * @brief Global Variables
     * 
     */
    extern SymbolTable *ST;// Current Symbol Table
    extern SymbolTable *globalST;// Global Symbol Table
    extern QuadArray quadArr;//Global Quad array
    extern int cnt;//global counter for number of temporaries generated
    extern st_types_* lastType;//global variable storing last encounteres type
    extern map<string,int> labels;
    SymbolTableRow* curr;//points to current symbol during declaration
    SymbolTable* funcParam = NULL;//points to the symbol table of params
    //extern int offset;//global counter for offset
    //extern int isConditional = 0;//If a conditional block like while loop or if etc has started
%}


%union {
    char* Int;
    char* Punctuator;
    char* Id;
    char* Float;
    char* Double;
    char* String;
    char* Char;
    attrM* atrM;
    exprr* expr;
    exprr* arr;
    blockAttr* block;
    char* storage_class_spec__;
    char* type_specifier__;
    st_types_* symType;
    declaratorAttr* decl;
    statementAttr* stmt;
    constAttr* cnst;
    SymbolTableRow* smPtr;
    argAttr* arg;
}


%token KEYWORD_ AUTO_ BREAK_ CASE_  CHAR_ CONST_ CONTINUE_ DEFAULT_ DO_ DOUBLE_
%token ELSE_ ENUM_ EXTERN_ FLOAT_ FOR_ GOTO_ IF_ INLINE_ INT_
%token LONG_ REGISTER_ RESTRICT_ RETURN_ SHORT_ SIGNED_ SIZEOF_ STATIC_ STRUCT_ SWITCH_
%token TYPEDEF_ UNION_ UNSIGNED_ VOID_ VOLATILE_ WHILE_ BOOL_ COMPLEX_ IMAGINARY_

%token SQRBRK_OPEN_ SQRBRK_CLOSE_ PAREN_OPEN_ PAREN_CLOSE_ CURBRK_OPEN_ CURBRK_CLOSE_
%token DOT_ ARROW_ INCR_ DECR_ AND_ STAR_ PLUS_ MINUS_ TILDA_ NOT_ SLASH_ PERCENT_ LSHFT_ RSHFT_ 
%token LESS_ GRTH_ LESSE_ GRTHE_ EQUALS_ NOTEQ_ XOR_ OR_ ANDAND_ OROR_ QUES_ COLON_ SEMICOLON_ TRPDOTS_
%token ASSGN_ ASSGNMUL_ ASSGNDIV_ ASSGNPERCENT_ ASSGNPLUS_ ASSGNMINUS_ ASSGNLSHT_ ASSGNRSHT_ ASSGNAND_ ASSGNOR_ ASSGNXOR_
%token COMMA_ HASH_ PUNCTUATOR_

%token <smPtr> IDENTIFIER_
%token <Double> FLOAT_CONSTANT_
%token <Char> CHARACTER_CONSTANT_
%token <String> STRING_LITERAL_
%token <String> ENUMERATION_CONSTANT_
%token <Int> INTEGER_CONSTANT_
%token <Double> FRACTIONAL_CONSTANT_

%nonassoc PAREN_CLOSE_
%nonassoc ELSE_
%start translation_unit


%type<smPtr>identifier_opt

%type<block>
function_definition
changeScope

%type<decl>
direct_declarator
declarator
initializer
init_declarator

%type<cnst>
constant

%type<symType>

pointer
pointer_opt

%type <atrM>
M

%type <expr> primary_expression
multiplicative_expression
additive_expression
shift_expression
relational_expression
equality_expression
AND_expression
exclusive_OR_expression
inclusive_OR_expression
logical_AND_expression
logical_OR_expression
conditional_expression
assignment_expression
expression
expression_opt
assignment_expression_opt

%type <arr> postfix_expression
unary_expression
cast_expression

%type<arg> argument_expression_list_opt
argument_expression_list

%type<Punctuator> unary_operator  //Punctuators
assignment_operator

%type<storage_class_spec__>
storage_class_specifier

%type<type_specifier__>   //type specifier as char*
type_specifier

%type<stmt>
block_item
expression_statement
selection_statement
iteration_statement
jump_statement
statement
labeled_statement
compound_statement
block_item_list_opt
block_item_list
N
%%
startCond : {isConditional = 1;};
endCond : {isConditional = 0;};

constant:       FLOAT_CONSTANT_ { $$ = new constAttr(new FLOAT(),$1); }
            |   CHARACTER_CONSTANT_ {$$ = new constAttr(new CHAR(),$1);}            
            |   ENUMERATION_CONSTANT_ { }
            |   INTEGER_CONSTANT_ {$$ = new constAttr(new INT(),$1);}
            |   FRACTIONAL_CONSTANT_ { }
            ;


primary_expression:     IDENTIFIER_ {
    funcParam = NULL;
                            cout<<"prexpr->id "<<$1->name_<<"\n";
                            $$ = new exprr();
                            $$->loc  = $1;
                            //h1
                            //if($$->loc->type_==NULL) $$->loc->type_  = lastType;
                            $$->Type = $$->loc->type_;
                            cout<<"--ok\n";
                            
                        }
                    |   constant {
                        funcParam = NULL;
                        $$ = new exprr();
                        $$->loc = gentemp($1->tp,$1->val);
                        $$->Type = $1->tp;
                        $$->loc->initVal_ = $1->val;
                        emit("=",$$->loc->name_,$1->val);
                    }
                    |   STRING_LITERAL_ {
                        funcParam = NULL;
                        $$ = new exprr();
                        $$->loc  = gentemp(new PTR(0,new CHAR()),$1);
                        $$->Type = $$->loc->type_;
                        emit("=",$$->loc->name_,$1);
                    }
                    |   PAREN_OPEN_ expression PAREN_CLOSE_ { 
                        funcParam = NULL;
                        $$ = $2;
                        //
                        }
                    ;


postfix_expression:     primary_expression {
                         cout<<"ST:: "<<ST->name<<"\n";
                        cout<<"pos->pri: "<<$1->loc->name_<<"\n";
                        
                        if($1->isBool){
                            $$ = $1;
                        }else{
                             cout<<"-1::\n";
                            $$ = new exprr($1->loc->type_->name_);
                            cout<<"0::\n";
                            $$->array = $1->loc;
                            cout<<"1::\n";
                            string tpName = $1->loc->type_->name_;
                            cout<<"2::\n";
                            if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                $$->loc = gentemp(new INT());
                                $$->loc->initVal_ = "0";
                                emit("=",$$->loc->name_,"0");

                            }else $$->loc = $1->loc;
                            $$->Type = $1->Type;
                        }
                        cout<<"--ok\n";
                        //
                        //
                        //
                        }
                    |   postfix_expression SQRBRK_OPEN_ expression SQRBRK_CLOSE_ {
                          
                        $$ = $1;
                        
                        if($1->Type->type_==NULL){
                            throw typeError();
                        }
                        
                        $$->Type = $1->Type->type_;//next type in type expression tree
                        
                        //SymbolTableRow* t = gentemp(new INT());   //for address calculations
                        $$->loc = gentemp(new INT());        
                        string nme =  $$->loc->name_; 
                                     
                        emit("*",$3->loc->name_,to_string($$->Type->width),nme);                        
                        //emit("+",$1->loc->name_,t->name_,nme);
                          

                    }
                    |   postfix_expression PAREN_OPEN_ argument_expression_list_opt PAREN_CLOSE_ {
                         
                        $$=new exprr();	
                        cout<<"DB1"<<$1->array->name_<<"\n";
		                //$$->array=gentemp($1->Type);
                        //_FUNC
                        $$->array = $$->loc = $1->loc;
		                $$->Type = $1->Type;
                        
                        if($1->array->type_->retType==NULL)//void function
                        {
                            emit("call",$1->array->name_,to_string($3->params.size()),"");
                            $$ = NULL;
                            
                        }else{
                            $$->loc = $$->array = gentemp($1->array->type_->retType);
                            $$->Type = $1->array->type_->retType;
                            cout<<$$->Type->name_<<"\n";
                            emit("call",$1->array->name_,to_string($3->params.size()),$$->loc->name_);
                        }
                        cout<<"--ok\n";
		                
                    }
                    |   postfix_expression DOT_ IDENTIFIER_ {}
                    |   postfix_expression ARROW_ IDENTIFIER_ {}
                    |   postfix_expression INCR_ {

                        $$ = new exprr();
                        $$->loc = $$->array = gentemp($1->Type);
                        $$->Type = $1->Type;
                        emit("=",$$->loc->name_,$1->loc->name_);
                        emit("+",$1->loc->name_,"1",$1->loc->name_);
                    }
                    |   postfix_expression DECR_ {
                        $$ = new exprr();
                        $$->loc =  $$->array = gentemp($1->Type);
                        $$->Type = $1->Type;
                        emit("=",$$->loc->name_,$1->loc->name_);
                        emit("-",$1->loc->name_,"1",$1->loc->name_);
                    }
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ CURBRK_OPEN_ initializer_list CURBRK_CLOSE_ {}
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ CURBRK_OPEN_ initializer_list COMMA_ CURBRK_CLOSE_ {}
                    ;

argument_expression_list_opt : argument_expression_list {
                               $$ = $1;
                                }
                             | {
                                 $$= new argAttr();
                             }
                             ;

argument_expression_list    :   assignment_expression { 
                                    
                                    $$ = new argAttr();                                   
                                    $$->params.push_back($1->loc);
                                    emit("param",$1->loc->name_,"","");
                                }
                            |   argument_expression_list COMMA_ assignment_expression {
                                $$ = $1;                                   
                                $$->params.push_back($3->loc);
                                emit("param",$3->loc->name_,"","");
                            }
                            ;


unary_expression:       postfix_expression {    
                            
                        $$ = $1;
                        //cout<<"un ->post: "<<$1->array->name_<<"\n";
                       // 
                        //
                        }
                    |   INCR_ unary_expression {
                         
                        emit("+",$2->loc->name_,"1",$2->loc->name_);
                        $$ = $2;
                    }
                    |   DECR_ unary_expression {
                         
                        emit("-",$2->loc->name_,"1",$2->loc->name_);
                        $$ = $2;
                    }
                    |   unary_operator cast_expression {
                         
                        $$ = new exprr();
                        if($1=="*"){
                            if($2->Type->type_==NULL)   throw typeError();
                            $$->array = $2->loc;
                            $$->loc = gentemp($2->Type->type_);
                            $$->Type = $2->Type->type_;
                            emit("="+string($1),$$->loc->name_,$2->loc->name_);
                        }else if($1=="&"){
                            SymbolTableRow* temp;
                            cout<<"& :: "<<$2->array->name_<<$2->array->type_->name_<<"\n";
                            string tpName = $2->array->type_->name_;
                            if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                temp = gentemp(new PTR(0,$2->array->type_));
                                
                                emit("=&",temp->name_,$2->array->name_);
                            }else{
                                temp = gentemp(new PTR(0,$2->array->type_));
                                emit("=&",temp->name_,$2->loc->name_);
                            }
                            $$->loc = temp;
                            $$->Type = temp->type_;
                            $$->array = temp;                            
                        }
                        else{
                            $$->array = $$->loc = gentemp($2->Type);
                            $$->Type = $2->Type;
                            emit("="+string($1),$$->loc->name_,$2->loc->name_);
                        }
                        
                    }
                    |   SIZEOF_ unary_expression {}
                    |   SIZEOF_ PAREN_OPEN_ type_name PAREN_CLOSE_ {}
                    ;


unary_operator:     AND_    {$$ = "&";}
                |   STAR_   {$$ = "*";}
                |   PLUS_   {$$="+";}
                |   MINUS_  {$$="-";}
                |   TILDA_  {$$="~";}
                |   NOT_    {$$="!";}
                ;



cast_expression:        unary_expression    { 
    
                         $$ = $1;
                       //  
                        //
                         }
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ cast_expression {
                        
                        $$ = new exprr();
                        typecheck2($4,lastType);//forced casting
                    }
                    ;


multiplicative_expression:      cast_expression {
   // cout<<$1->array->name_<<"\n";
                                cout<<"Mul->Cast\n";
                                if($1==NULL){
                                    $$ = NULL;
                                }else{
                                    if($1->isBool){
                                    $$ = $1;
                                    }else{
                                        $$ = new exprr();
                                    //
                                    //
                                        string tpName = $1->array->type_->name_;
                                    // 
                                        if(tpName.size()>=3&&tpName.substr(0,3)=="ptr"){
                                            $$->loc = $1->loc;
                                            
                                        }else if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                            
                                            if($1->Type->type_==NULL){
                                                //Need to dereference
                                                $$->loc  = gentemp($1->Type);
                                                emit("=[]",$1->array->name_,$1->loc->name_,$$->loc->name_);
                                            }else{
                                                
                                                $$->loc= gentemp(new PTR(0,$1->array->type_->type_));
                                                emit("+",$1->array->name_,$1->loc->name_,$$->loc->name_);
                                            }
                                            

                                        }else if($1->loc->type_->name_=="function"){
                                            
                                            $$->loc = $1->loc;
                                            
                                        }
                                        else{
                                            
                                            //normal variable
                                            $$->loc = $1->loc;
                                        
                                        
                                        }
                                        $$->Type = $1->Type;
                                    }
                                    cout<<"Mul=->Cast--ok\n";
                                }
                                
                                 //
                                 //
                            }
                            |   multiplicative_expression STAR_ cast_expression {
                                $$ = new exprr();
                                if($1->Type->name_==$3->Type->name_){
                                    $$->loc = gentemp($1->Type);
                                    emit("*",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                }else{//some casting required
                                    
                                    if(typecheck1($1,$3)){
                                        $$->loc = gentemp($1->loc->type_);
                                        emit("*",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 $$->Type = $1->Type;
                                
                            }
                            |   multiplicative_expression SLASH_ cast_expression {
                                $$ = new exprr();
                                if($1->Type->name_==$3->Type->name_){
                                    $$->loc = gentemp($1->Type);
                                    emit("/",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                }else{//some casting required
                                   
                                    if(typecheck1($1,$3)){
                                        $$->loc = gentemp($1->loc->type_);
                                        emit("/",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 $$->Type = $1->Type;
                            }
                            |   multiplicative_expression PERCENT_ cast_expression {
                                $$ = new exprr();
                                if($1->Type->name_==$3->Type->name_){
                                    $$->loc = gentemp($1->Type);
                                    emit("%",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                }else{//some casting required
                                    if(typecheck1($1,$3)){
                                        $$->loc = gentemp($1->loc->type_);
                                        emit("%",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 $$->Type = $1->Type;
                            }
                            ;


additive_expression:        multiplicative_expression {
                            
                            $$ = $1;//Just copy
                            
                                
                            }
                        |   additive_expression PLUS_ multiplicative_expression {
                                
                                $$ = new exprr();/*
                                //
                                //quadArr.print();
                               // 
                               // 
                                if($1->Type->name_==$3->Type->name_){
                                    //
                                   // 
                                    $$->loc = gentemp($1->Type);
                                   // 
                                   // 
                                   // 
                                   // 
                                    emit("+",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    //quadArr.print();
                                    //
                                }else{//some casting required
                                    
                                }*/
                                if((!$1->isBool)&&($1->loc->type_->name_.size()>=3&&$1->loc->type_->name_.substr(0,3)=="ptr")){
                                   
                                    
                                    if($3->isBool) convBooltoInt($3);
                                    if($3->loc->type_->name_=="int"){//Pointer arithmetic for plus
                                        SymbolTableRow* temp = gentemp(new INT());
                                        emit("*",$3->loc->name_,to_string($1->loc->type_->type_->width),temp->name_);
                                        $$->loc = gentemp($1->loc->type_);
                                        $$->array = $1->array;
                                        emit("+",$1->loc->name_,temp->name_,$$->loc->name_);
                                    }else throw typeError();
                                
                                }else if((!$1->isBool)&&($1->loc->type_->name_.size()>=5&&$1->loc->type_->name_.substr(0,5)=="array")){
                                    if($3->isBool) convBooltoInt($3);
                                    if($3->loc->type_->name_=="int"){//Pointer arithmetic for plus
                                        SymbolTableRow* temp = gentemp(new INT());
                                        emit("*",$3->loc->name_,to_string($1->loc->type_->type_->width),temp->name_);
                                        $$->loc = gentemp(new PTR(0,$1->loc->type_->type_));
                                        $$->array = $1->array;
                                        emit("+",$1->loc->name_,temp->name_,$$->loc->name_);
                                    }else throw typeError();
                                }else  if(typecheck1($1,$3)){
                                        $$->loc = gentemp($1->loc->type_);
                                        emit("+",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                } else{
                                    throw typeError();
                                }
                                 $$->Type = $1->Type;
                                 
                        }
                        |   additive_expression MINUS_ multiplicative_expression {
                            $$ = new exprr();
                                if($1->Type->name_==$3->Type->name_){
                                    $$->loc = gentemp($1->Type);
                                    emit("-",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                }else{//some casting required
                                   if(typecheck1($1,$3)){
                                        $$->loc = gentemp($1->loc->type_);
                                        emit("-",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 $$->Type = $1->Type;
                        }
                        ;


shift_expression:           additive_expression {
                            
                            $$ = $1;
                        }
                        |   shift_expression LSHFT_ additive_expression {
                            $$ = new exprr();
                            if($3->Type->name_=="int"&&$1->Type->name_=="int"){
                                $$->loc = gentemp($1->Type);
                                emit("<<",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                            }else{
                                throw typeError();
                            }
                             $$->Type = $1->Type;
                        }
                        |   shift_expression RSHFT_ additive_expression {
                            $$ = new exprr();
                            if($3->Type->name_=="int"&&$1->Type->name_=="int"){
                                $$->loc = gentemp($1->Type);
                                emit(">>",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                            }else{
                               throw typeError();
                            }
                             $$->Type = $1->Type;
                        }
                        ;

//Boolean Expressions
// : Casting from int/float to  bool
M : {
    $$ = new attrM();
    $$->instr = nextinstr();
};
N : {
    $$ = new statementAttr();
    $$->nextList = makelist(nextinstr());
    emit("goto","","","");
};
relational_expression:      shift_expression  {
                            
                            $$ = $1;
                        }
                        |   relational_expression LESS_ shift_expression  {
                            cout<<"<:::\n";
                            if(!typecheck1($1,$3)) throw typeError();
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifLESSgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                             $$->Type = $1->Type;
                             $$->isBool = 1;
                        }
                        |   relational_expression GRTH_ shift_expression  {
                            cout<<">:::\n";
                            if(!typecheck1($1,$3)) throw typeError();
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifGRTHgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                            $$->Type = $1->Type;
                            $$->isBool = 1;
                        }
                        |   relational_expression LESSE_ shift_expression  {
                            if(!typecheck1($1,$3)) throw typeError();
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifLESSEgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                             $$->Type = $1->Type;
                             $$->isBool = 1;
                        }
                        |   relational_expression GRTHE_ shift_expression {
                            if(!typecheck1($1,$3)) throw typeError();
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifGRTHEgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                             $$->Type = $1->Type;
                             $$->isBool = 1;
                        }
                        ; 

equality_expression:        relational_expression {
                            cout<<"Eq->rel\n";
                            $$ = $1;//Same just copy
                        }
                        |   equality_expression EQUALS_ relational_expression {
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifEQgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                             $$->Type = $1->Type;
                             $$->isBool = 1;
                        }
                        |   equality_expression NOTEQ_ relational_expression {
                            $$ = new exprr();
                            $$->trueList = makelist(nextinstr());
                            $$->falseList = makelist(nextinstr()+1);
                            emit("ifNEQgoto",$1->loc->name_,$3->loc->name_,"");
                            emit("goto","","","");
                             $$->Type = $1->Type;
                             $$->isBool = 1;
                        }
                        ;

AND_expression:             equality_expression {
                            cout<<"AND -> EQ\n";
                            $$ = $1;//Keep Same
                        }
                        |   AND_expression AND_ equality_expression {
                            $$ = new exprr();
                            if($3->Type->name_=="int"&&$1->Type->name_=="int"){
                                $$->loc = gentemp($1->Type);
                                emit("&",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                            }else{
                                throw typeError();
                            }
                             $$->Type = $1->Type;
                             
                        }
                        ;


exclusive_OR_expression:        AND_expression {
                                cout<<"XOR->AND\n";
                                $$ = $1;// Keep Same
                            }
                            |   exclusive_OR_expression XOR_ AND_expression {
                                $$ = new exprr();
                                if($3->Type->name_=="int"&&$1->Type->name_=="int"){
                                    $$->loc = gentemp($1->Type);
                                    emit("^",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                }else{
                                    throw typeError();
                                }
                                 $$->Type = $1->Type;
                            }
                            ;

inclusive_OR_expression:        exclusive_OR_expression { 
                                    cout<<"OR->XOR\n";
                                    $$ = $1;}
                            |   inclusive_OR_expression OR_ exclusive_OR_expression {
                                    cout<<"OR:::\n";
                                    $$ = new exprr();
                                    if($3->Type->name_=="int"&&$1->Type->name_=="int"){
                                        $$->loc = gentemp($1->Type);
                                        emit("|",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    }else{
                                        throw typeError();
                                    }
                                     $$->Type = $1->Type;
                                }
                            ;


logical_AND_expression:         inclusive_OR_expression {
                                cout<<"&&->|\n";
                            $$ = $1;}
                            |   logical_AND_expression ANDAND_ M inclusive_OR_expression {
                                $$ = new exprr();
                                if(!$1->isBool){
                                    if($1->loc->type_->name_=="int"){
                                        convInttoBool($1);
                                    }else throw typeError();
                                }
                                if(!$4->isBool){
                                    if($4->loc->type_->name_=="int"){
                                        convInttoBool($4);
                                    }else throw typeError();
                                }
                                
                                backpatch($1->trueList, $3->instr);
                                $$->trueList = $4->trueList;
                                $$->falseList = merge($1->falseList,$4->falseList);
                                 $$->Type = $1->Type;
                                 $$->isBool = 1;
                            }
                            ;


logical_OR_expression:          logical_AND_expression {
                                cout<<"||->&&\n";
    $$ = $1;}
                            |   logical_OR_expression OROR_ M logical_AND_expression {
                                cout<<"||::::\n";
                                $$ = new exprr();
                                if(!$1->isBool){
                                    if($1->loc->type_->name_=="int"){
                                        convInttoBool($1);
                                    }else throw typeError();
                                }
                                if(!$4->isBool){
                                    if($4->loc->type_->name_=="int"){
                                        convInttoBool($4);
                                    }else throw typeError();
                                }
                                backpatch($1->falseList, $3->instr );
                                $$->trueList = merge($1->trueList, $4->trueList);
                                $$->falseList = $4->falseList;
                                 $$->Type = $1->Type;
                                 $$->isBool = 1;
                            }
                            ;


conditional_expression:         logical_OR_expression {
    
    $$ = $1;}
                            |   logical_OR_expression N QUES_ M expression N COLON_ M conditional_expression {
                                $$ = new exprr();
                                //Convert condition to bool
                                if(!$1->isBool){
                                    if($1->loc->type_->name_=="int"){
                                        convInttoBool($1);
                                    }else throw typeError();
                                }
                                $$->loc = gentemp($5->Type);
                                emit("=",$$->loc->name_,$9->loc->name_);
                                list<int> L= makelist(nextinstr());
                                emit("goto","","","");
                                backpatch($6->nextList,nextinstr());
                                emit("=",$$->loc->name_,$5->loc->name_);
                                L = merge(L,makelist(nextinstr()));
                                emit("goto","","","");
                                backpatch($2->nextList,nextinstr());
                                //convInttoBool($$->loc);
                                backpatch($1->trueList,$4->instr);
                                backpatch($1->falseList,$8->instr);
                                backpatch(L,nextinstr());
                                 $$->Type = $1->Type;

                            }
                            ;

assignment_expression:          conditional_expression {
                                
                                $$ = $1;//Same
                            }
                            |   unary_expression assignment_operator assignment_expression {
                                
                                if($1->isBool){
                                    throw typeError();
                                }
                                
                                if(!typecheck2($3,$1->loc->type_))  throw typeError();
                                $$ = $3;//fall through of assignment
                                
                                string tpName = $1->array->type_->name_;
                                
                                if(tpName.size()>5&&tpName.substr(0,5)=="array"){
                                    
                                    emit("[]=",$1->array->name_,$1->loc->name_,$3->loc->name_);//LHS[ind] = RHS
                                }else if(tpName.size()>3&&tpName.substr(0,3)=="ptr"){
                                    
                                    emit("*=",$1->array->name_,"",$3->loc->name_);//*(LHS) = RHS
                                }else{
                                    emit("=",$1->loc->name_,$3->loc->name_);// LHS = RHS
                                }

                            }
                            ;

assignment_operator:            ASSGN_  { $$  = "=";}
                            |   ASSGNMUL_ {$$ = "*=";}
                            |   ASSGNDIV_ {$$ = "/=";}
                            |   ASSGNPERCENT_ {$$ = "%=";}
                            |   ASSGNPLUS_ {$$ = "+=";}
                            |   ASSGNMINUS_ {$$ = "-=";}
                            |   ASSGNLSHT_ {$$ = "<<=";}
                            |   ASSGNRSHT_ {$$ = ">>=";}
                            |   ASSGNAND_ {$$ = "&=";}
                            |   ASSGNOR_ {$$ = "|=";;}
                            |   ASSGNXOR_ {$$ = "^=";}
                            ;

expression:                     assignment_expression   {
    
                            
    $$ = $1;}
                            |   expression COMMA_ assignment_expression {

                            }
                            ;


constant_expression:            conditional_expression {

                                }
                            ;



declaration:                    declaration_specifiers init_declarator_list_opt SEMICOLON_ {
                if(funcParam!=NULL) {
                    
                    funcParam = NULL;
                    cout<<"going to Global1\n";
                    ST = globalST;  /// ----flag
                }
                curr = NULL;
    
    }
                            ;
init_declarator_list_opt : init_declarator_list {
    
    }
                         | {}
                         ;

declaration_specifiers:         storage_class_specifier declaration_specifiers_opt {
    
    }
                            |   type_specifier declaration_specifiers_opt {
                                
                                }
                            |   type_qualifier declaration_specifiers_opt {}
                            |   function_specifier declaration_specifiers_opt {}
                            ;
declaration_specifiers_opt : declaration_specifiers {
    
    }
                           | {
                               
                               }
                           ;

init_declarator_list:           init_declarator {
     
     }
                            |   init_declarator_list COMMA_ init_declarator {} 
                            ;

init_declarator:                declarator {
                                
                            $$ = $1;}
                            |   declarator ASSGN_ initializer {
                                //
                                
                                
                                if(!typecheck2($3,$1->loc->type_)) throw typeError();
		                        emit("=", $1->loc->name_, $3->loc->name_);
                                if($3->loc->initVal_!="") $1->loc->initVal_=$3->loc->initVal_;        
                                $$ = $1;
                                
                            }
                            ;

identifier_list_opt : identifier_list {}
                    | {}
                    ;


/*Declarations*/
storage_class_specifier : EXTERN_   {$$ = "extern";}
                        | STATIC_   {$$ = "static";}
                        | AUTO_     {$$ = "auto";}
                        | REGISTER_ {$$ = "register";}
                        ;

type_specifier : VOID_ {
                    $$ = "void";
                    lastType = new VOID();
                }
               | CHAR_ {$$ = "char";
                    lastType = new CHAR();
               }
               | SHORT_ {$$ = "short";}
               | INT_ {
                    $$ = new char[20];
                    $$ = "int";
                    
                    lastType = new INT();
                    
               }
               | LONG_ {$$ = "long";}
               | FLOAT_ {$$ = "float";
                    lastType = new FLOAT();
                }
               | DOUBLE_ {$$ = "double";}
               | SIGNED_ {$$ = "signed";}
               | UNSIGNED_ {$$ = "unsigned";}
               | BOOL_ {$$ = "bool";}
               | COMPLEX_ {$$ = "complex";}
               | IMAGINARY_ {$$ = "imaginary";}
               | enum_specifier {}
               ;


specifier_qualifier_list : type_specifier specifier_qualifier_list_opt {}
                         | type_qualifier specifier_qualifier_list_opt {}
                         ;

specifier_qualifier_list_opt : specifier_qualifier_list {}
                | {}
                ;

enum_specifier : ENUM_ identifier_opt CURBRK_OPEN_ enumerator_list CURBRK_CLOSE_ {}
               | ENUM_ identifier_opt CURBRK_OPEN_ enumerator_list COMMA_ CURBRK_CLOSE_  {}
               | ENUM_ IDENTIFIER_ {}
               ;

identifier_opt : IDENTIFIER_ {$$ = $1; }
               | {$$ = new SymbolTableRow();}
               ;

enumerator_list : enumerator {}
                | enumerator_list COMMA_ enumerator {}
                ;

enumerator : ENUMERATION_CONSTANT_ {}
           | ENUMERATION_CONSTANT_ ASSGN_ constant_expression {}
           ;

type_qualifier : CONST_   {}
               | RESTRICT_  {}
               | VOLATILE_  {}
               ;

function_specifier : INLINE_ {}
                   ;

declarator : pointer_opt direct_declarator {
                
                //
                
                $$ = new declaratorAttr();
                //
                $$->loc = $2->loc;
                $$->loc->type_ = $$->type = merge($1,$2->loc->type_);//if dollar1 is  null the merge func will mange accordingly
                
                $$->width = $$->loc->size_ = $$->type->width;
                //
            }
           ;

pointer_opt : pointer { 
            
            $$ = $1;}
            | { 
                $$ = NULL;}
            ;
//
direct_declarator : IDENTIFIER_ {         
                        funcParam = NULL;             
                        $$ = new declaratorAttr();
                        SymbolTableRow* temp = $1;
                        ST->update(temp,lastType,ST->offset);
                        ST->offset = ST->offset + lastType->width ;
                        $$->loc = $1;                        
                        $$->type = $$->loc->type_ = lastType;
                        $$->loc->size_ = $$->width = $$->type->width;
                        
                        curr = $$->loc;
                    }
                  | PAREN_OPEN_ declarator PAREN_CLOSE_ {$$ = $2;}
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list_opt assignment_expression_opt SQRBRK_CLOSE_ {
                      
                      int sz;
                      stringstream ss($4->loc->initVal_);
                      ss>>sz;
                      $1->loc->type_ = mergeType($1->loc->type_,sz);
                      //Update the symbol
                      ST->offset-=$1->loc->size_;
                      $1->loc->size_ =$1->loc->type_->width;
                      ST->offset+=$1->loc->size_;
                      
                      $$ = $1;
                      $$->type = $1->loc->type_;
                      $$->width = $1->loc->type_->width;
                     

                  }
                  | direct_declarator SQRBRK_OPEN_ STATIC_ type_qualifier_list_opt assignment_expression SQRBRK_CLOSE_ {
                      

                  }
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list STATIC_ assignment_expression SQRBRK_CLOSE_ {

                  }
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list_opt STAR_ SQRBRK_CLOSE_ {}
                  | direct_declarator PAREN_OPEN_  changeScope parameter_type_list PAREN_CLOSE_ {
                      if(labels.find($1->loc->name_)!=labels.end())  throw Error("Too many lables");
                      labels[$1->loc->name_] = nextinstr();
                      emit("label","","",$1->loc->name_);
                      cout<<"direct declarator: "<<$1->loc->name_<<"\n";
                      $1->loc->nestedTable_ = ST; 
                      funcParam = ST;                        
                        //ST = globalST;  ----flag
                        $$->loc  = $1->loc; //pointer to the function symbol
                        //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                        st_types_ *temp_ = $$->loc->type_;                                                    	 	
                        $$->loc->type_ = new FUNCTION();
                        $$->loc->size_ = 0;
                        if(temp_->name_!="void") $$->loc->type_->retType = temp_;
                        else $$->loc->type_->retType = NULL;


                        //curr = NULL;  ----flag
                      
                  }
                  | direct_declarator  PAREN_OPEN_ changeScope  identifier_list_opt PAREN_CLOSE_  {
                        cout<<"Id list\n";
                        labels[$1->loc->name_] = nextinstr();
                        emit("label","","",$1->loc->name_);
                        $1->loc->nestedTable_ = ST;  
                        funcParam = ST;                       
                        //ST = globalST;  ----flag
                        $$->loc  = $1->loc; //pointer to the function symbol
                        //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                        cout<<"direct declarator: "<<$$->loc->name_<<"\n";
                        st_types_ *temp_ = $$->loc->type_;                                                    	 	
                        $$->loc->type_ = new FUNCTION();
                        $$->loc->size_ = 0;
                        if(temp_->name_!="void") $$->loc->type_->retType = temp_;
                        else $$->loc->type_->retType = NULL;
                       //curr = NULL;  ----flag
                      
                      }
                  ;

pointer : STAR_ type_qualifier_list_opt {
            
            $$ = new PTR();   //NOW BASE Type is null it will be set later
        }
        | STAR_ type_qualifier_list_opt pointer  {

            
            $$ = new PTR(0,$3);
            
        }
        ;

type_qualifier_list_opt : type_qualifier_list  {}
                        | {}
                        ;

assignment_expression_opt : assignment_expression  {$$ = $1;}
                          | {$$ = new exprr();}
                          ;

type_qualifier_list : type_qualifier  {}
                    | type_qualifier_list type_qualifier   {}
                    ;

parameter_type_list : parameter_list {}
                    | parameter_list COMMA_ TRPDOTS_ {}
                    ;

parameter_list : parameter_declaration {}
               | parameter_list COMMA_ parameter_declaration  {}
               ;



parameter_declaration : declaration_specifiers declarator {}
                      | declaration_specifiers {}
                      ;

identifier_list : IDENTIFIER_ {}
                | identifier_list COMMA_ IDENTIFIER_ {}
                ;
type_name : specifier_qualifier_list {}
          ;

initializer : assignment_expression {
                $$ = new declaratorAttr();
                
                if($1->isBool){
                    convBooltoInt($1);
                }
                $$->loc = $1->loc;
                $$->type = $1->loc->type_;
                $$->width = $1->loc->type_->width;
                
            }
            | CURBRK_OPEN_ initializer_list CURBRK_CLOSE_ {}
            | CURBRK_OPEN_ initializer_list COMMA_ CURBRK_CLOSE_ {}
            ;

initializer_list : designation_opt initializer {}
                 | initializer_list COMMA_ designation_opt initializer {}
                 ;

designation_opt : designation {}
                | {}
                ;

designation : designator_list ASSGN_ {}
            ;

designator_list : designator {}
                | designator_list designator {}
                ;

designator : SQRBRK_OPEN_ constant_expression SQRBRK_CLOSE_ {}
           | DOT_ IDENTIFIER_  {}
           ;


/*Statements*/

statement : labeled_statement {
    
}
          | compound_statement {
               
              $$ = $1;
          }
          | expression_statement {
              
              $$ = $1;
          }
          | selection_statement {
              
              $$ = $1;
          }
          | iteration_statement { 
              
              
              $$ = $1;}
          | jump_statement { 
              
              $$ = $1;}
          ;

labeled_statement: IDENTIFIER_ COLON_ statement {$$ = $3;}
                 | CASE_ constant_expression COLON_ statement {}
                 | DEFAULT_ COLON_ statement { $$ = $3;}
                 ;

compound_statement : CURBRK_OPEN_ changeScope block_item_list_opt CURBRK_CLOSE_ {
                        $$ = $3;
                        $$->ST = ST;                        
                        if(ST->par!=NULL) ST = ST->par;//Go to parent symbol table
                        cout<<"comd stmt\n";
                    }
                   ;

block_item_list_opt : block_item_list {
                        
                        $$ = $1;
                    }
                    | {
                        
                        $$ = new statementAttr();}
                    ;

block_item_list : block_item {
                $$ = $1;}
                | block_item_list M block_item {
                    
                    
                    
                    backpatch($1->nextList,$2->instr);
                    $$ = $3;
                    
                }
                ;

block_item : declaration {
            $$ = new statementAttr();

            }
           | statement {
               
               $$ = $1;
               
               }
           ;

expression_statement : expression_opt SEMICOLON_ {
                            $$ = new statementAttr();                            
                        }
                     ;

expression_opt : expression {$$ = $1;
                    
                    
}
               | {$$ = new exprr();
                    if(isConditional){
                        $$->loc = gentemp(new INT());
                        $$->Type = $$->loc->type_;
                        emit("=",$$->loc->name_,"1");
                        convInttoBool($$);
                    }
               } 
               ;

selection_statement : IF_ PAREN_OPEN_ changeScope startCond  expression endCond PAREN_CLOSE_ M statement {
                            if( (!$5->isBool)) {
                                cout<<"Error!"<<"\n";
                                if(!typecheck2($5,new INT()))   throw typeError();
                                convInttoBool($5);
                            }
                        $$ = new statementAttr();
                        backpatch($5->trueList,$8->instr);
                        $$->nextList = merge($5->falseList,$9->nextList);
                        if(ST->par!=NULL) ST = ST->par;
                    }
                    | IF_ PAREN_OPEN_ changeScope startCond  expression endCond PAREN_CLOSE_ M statement N ELSE_ M statement {
                        if( (!$5->isBool)) {
                                if(!typecheck2($5,new INT()))   throw typeError();
                                convInttoBool($5);
                            }
                        $$ = new statementAttr();
                        backpatch($5->trueList,$8->instr);
                        backpatch($5->falseList,$12->instr);
                        list<int> temp = merge($9->nextList,$10->nextList);
                        $$->nextList = merge(temp,$13->nextList);
                        if(ST->par!=NULL) ST = ST->par;

                    }
                    | SWITCH_ PAREN_OPEN_ expression PAREN_CLOSE_ statement {}
                    ;

iteration_statement : WHILE_ M PAREN_OPEN_ changeScope startCond expression endCond PAREN_CLOSE_ M  statement {
                        if( (!$6->isBool)) {
                                if(!typecheck2($6,new INT()))   throw typeError();
                                convInttoBool($6);
                            }
                        $$ = new statementAttr();

                        
                        backpatch($10->nextList,$2->instr);
                        backpatch($6->trueList,$9->instr);
                        $$->nextList = $6->falseList;
                        emit("goto","","",to_string($2->instr));
                        if(ST->par!=NULL) ST = ST->par;
                    }
                    | DO_ M changeScope statement M WHILE_ PAREN_OPEN_ startCond expression endCond PAREN_CLOSE_ SEMICOLON_ {
                        if( (!$9->isBool)) {
                                if(!typecheck2($9,new INT()))   throw typeError();
                                convInttoBool($9);
                        }
                        $$ = new statementAttr();
                        backpatch($9->trueList,$2->instr);
                        backpatch($4->nextList,$5->instr);
                        $$->nextList = $9->falseList;
                        if(ST->par!=NULL) ST = ST->par;
                    }
                    | FOR_ PAREN_OPEN_ changeScope  expression_opt  SEMICOLON_ M startCond expression_opt endCond SEMICOLON_ M expression_opt N PAREN_CLOSE_ M statement {
                        if( (!$8->isBool)) {
                                if(!typecheck2($8,new INT()))   throw typeError();
                                convInttoBool($8);
                            }
                        $$ = new statementAttr();
                        backpatch($8->trueList,$15->instr);
                        backpatch($13->nextList,$6->instr);
                        backpatch($16->nextList,$11->instr);
                        emit("goto","","",to_string($11->instr));
                        $$->nextList = $8->falseList;
                        
                        if(ST->par!=NULL) ST = ST->par;
                    }
                    | FOR_ PAREN_OPEN_ changeScope declaration M startCond expression_opt endCond SEMICOLON_ M expression_opt N PAREN_CLOSE_ M statement {
                        if( (!$7->isBool)) {
                                if(!typecheck2($7,new INT()))   throw typeError();
                                convInttoBool($7);
                            }
                        $$ = new statementAttr();
                        backpatch($7->trueList,$14->instr);
                        backpatch($12->nextList,$5->instr);
                        backpatch($15->nextList,$10->instr);
                        emit("goto","","",to_string($10->instr));
                        $$->nextList = $7->falseList;
                        
                        if(ST->par!=NULL) ST = ST->par;
                    }
                    ;

jump_statement : GOTO_ IDENTIFIER_ SEMICOLON_ { $$ = new statementAttr;
            }
               | CONTINUE_ SEMICOLON_ {
                   $$ = new statementAttr();
                   //
               }
               | BREAK_ SEMICOLON_ {
                   $$ = new statementAttr;
               }
               | RETURN_ expression SEMICOLON_ {
                   $$ = new statementAttr;
                   emit("return","","",$2->loc->name_);
               }
               | RETURN_  SEMICOLON_ {
                   $$ = new statementAttr;
                   emit("return","","","");}
               ;

/*External Definations*/
translation_unit : external_declaration                   {}
                 | translation_unit external_declaration  {}
                 ;

external_declaration: function_definition  {}
                    | declaration  {}
                    ;

declaration_list_opt : declaration_list {}
                     | {}
                     ;

function_definition :  declaration_specifiers   declarator  declaration_list_opt  compound_statement {
                            cout<<"Func Def complete\n";
                            $$ = new blockAttr();
                            cout<<"ffunction: "<<$2->loc->name_<<" "<<$2->loc->type_->name_<<"\n";
                            //SymbolTable* temp = ST;
                            cout<<"Going to global\n";
                            ST = globalST; 
                            $$->loc  = $2->loc; //pointer to the function symbol
                            //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                            //st_types_ *temp_ = $$->loc->type_;                                                    	 	
                            //$$->loc->type_ = new FUNCTION();
                            //$$->loc->size_ = 0;
                            //$4->ST->par = $2->loc->nestedTable_;  //----flag
                            //$2->loc->nestedTable_->par = globalST; // ----flag
                            //if(temp_->name_!="void") $$->loc->type_->retType = temp_;
                            //else $$->loc->type_->retType = NULL;

                            curr = NULL;  
                            funcParam = NULL; 
                            cout<<"--ok\n";   
                        }
                    ;

declaration_list : declaration {}
                 | declaration_list declaration {}
                 ;

//To manage scopes and nested blocks
changeScope:%empty{//8469f56
    cout<<"Changing Scope::\n";
    cout<<ST->name<<"::\n";/*
    if(curr==NULL||curr->nestedTable_ == NULL){
        cout<<"123456:::\n";
        $$ = new blockAttr();
        $$->ST = createSymTab();
        if(funcParam!=NULL)  $$->ST->par = funcParam;
        else $$->ST->par = ST;
        $$->ST->n = 0;
        ST = $$->ST;//update current symbol table
    }else{
        cout<<"654321:::\n";
        $$ = new blockAttr();
        $$->ST = curr->nestedTable_; 
        if(funcParam!=NULL) $$->ST->par = funcParam;
        ST = curr->nestedTable_;
    }*/
    $$ = new blockAttr();
    $$->ST = createSymTab();        
    $$->ST->par = ST;
    $$->ST->n = 0;
    ST = $$->ST;//update current symbol table
    cout<<ST->name<<"::\n";
    
};

%%

void yyerror(char *y){
    //lineNo+1 gives current line number
}
