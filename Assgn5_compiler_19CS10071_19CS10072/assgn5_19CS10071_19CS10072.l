%{
#include<bits/stdc++.h>
#include "assgn5_19CS10071_19CS10072_translator.h"
#include "y.tab.h"
//Keywords
/*
#define KEYWORD_ 100
#define AUTO_ 1
#define BREAK_ 2
#define CASE_ 3
#define CHAR_ 4
#define CONST_ 5
#define CONTINUE_ 6
#define DEFAULT_ 7
#define DO_ 8
#define DOUBLE_ 9
#define ELSE_ 10
#define ENUM_ 11
#define EXTERN_ 12
#define FLOAT_ 13
#define FOR_ 14
#define GOTO_ 15
#define IF_ 16
#define INLINE_ 17
#define INT_ 18
#define LONG_ 19
#define REGISTER_ 20
#define RESTRICT_ 21
#define RETURN_ 22
#define SHORT_ 23
#define SIGNED_ 24
#define SIZEOF_ 25
#define STATIC_ 26
#define STRUCT_ 27
#define SWITCH_ 28
#define TYPEDEF_ 29
#define UNION_ 30
#define UNSIGNED_ 31
#define VOID_ 32
#define VOLATILE_ 33
#define WHILE_ 34
#define BOOL_ 35
#define COMPLEX_ 36
#define IMAGINARY_ 37










//Punctuator
#define SQRBRK_OPEN_ 38
#define SQRBRK_CLOSE_ 39
#define PAREN_OPEN_ 40
#define PAREN_CLOSE_ 41
#define CURBRK_OPEN_ 42
#define CURBRK_CLOSE_ 43
#define DOT_ 44
#define ARROW_ 45
#define INCR_ 46
#define DECR_ 47
#define AND_ 48
#define STAR_ 49
#define PLUS_ 50
#define MINUS_ 51
#define TILDA_ 52
#define NOT_ 53
#define SLASH_ 54
#define PERCENT_ 55
#define LSHFT_ 56
#define RSHFT_ 57
#define LESS_ 58
#define GRTH_ 59
#define LESSE_ 60
#define GRTHE_ 61
#define EQUALS_ 62
#define NOTEQ_ 63
#define XOR_ 64
#define OR_ 65
#define ANDAND_ 66
#define OROR_ 67
#define QUES_ 68
#define COLON_ 69
#define SEMICOLON_ 70
#define TRPDOTS_ 71
#define ASSGN_ 72
#define ASSGNMUL_ 73
#define ASSGNDIV_ 74
#define ASSGNPERCENT_ 75
#define ASSGNPLUS_ 76
#define ASSGNMINUS_ 77
#define ASSGNLSHT_ 78
#define ASSGNRSHT_ 79
#define ASSGNAND_ 80
#define ASSGNXOR_ 81
#define ASSGNOR_ 82
#define COMMA_ 83
#define HASH_ 84   
#define PUNCTUATOR_ 85

//Identifier
#define IDENTIFIER_ 86
#define FLOAT_CONSTANT_ 87
#define CHARACTER_CONSTANT_ 88
#define STRING_LITERAL_ 89
#define ENUMERATION_CONSTANT_ 90
#define INTEGER_CONSTANT_ 91
#define FRACTIONAL_CONSTANT_ 98

#define MULTI_COMMENT_START_  92
#define MULTI_COMMENT_BODY_ 93
#define MULTI_COMMENT_END_ 94
#define SINGLE_COMMENT_START_ 95
#define SINGLE_COMMENT_BODY_ 96
#define SINGLE_COMMENT_END_ 97
*/

int lineNo = 0;
/**
 * @brief Global Variables
 * 
 */
extern YYSTYPE yylval;
SymbolTable* ST;// Current Symbol Table
SymbolTable* globalST;//Global Symbol Table
QuadArray quadArr;//Global Quad array
int cnt;//global counter for number of temporaries generated
st_types_* lastType;//global variable storing last encounteres type
int isConditional = 0;//If a conditional block like while loop or if etc has started
vector<SymbolTable*> symTabList;//List of all symbols tables
map<string,int> labels;//maps label to int
map<string,string> asmLabels;//For labels in asm
%}


KEYWORD "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

PUNCTUATOR    "++"|"/"|"?"|"="|","|"]"|"("|")"|","|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"%%"
DIGIT                           [0-9]
IDENTIFIER_NON_DIGIT            [_a-zA-Z]
IDENTIFIER                      {IDENTIFIER_NON_DIGIT}({IDENTIFIER_NON_DIGIT}|{DIGIT})*
NON_ZERO_DIGIT                  [1-9]
NON_ZERO_INTEGER_CONSTANT       {NON_ZERO_DIGIT}{DIGIT}*
INTEGER_CONSTANT                {NON_ZERO_INTEGER_CONSTANT}|"0" 

EXPO_PART ("E"{SIGN}?{DIGIT_SEQ})|("e"{SIGN}?{DIGIT_SEQ})
FLOAT_CONSTANT ({FRACTIONAL_CONSTANT}{EXPO_PART}?)|({DIGIT_SEQ}{EXPO_PART})  
FRACTIONAL_CONSTANT ({DIGIT}*"."{DIGIT_SEQ})|({DIGIT_SEQ}".")
SIGN  "+"|"-"
DIGIT_SEQ                       {DIGIT}+
ENUMERATION_CONSTANT            {IDENTIFIER}
ESCAPE_SEQ  "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR  [^\'\n\\]|{ESCAPE_SEQ} 
C_CHAR_SEQ  {C_CHAR}+
CHARACTER_CONSTANT "\'"{C_CHAR}"\'"
S_CHAR [^\"\n\\]|{ESCAPE_SEQ}
S_CHAR_SEQ  {S_CHAR}+
STRING_LITERAL  "\""{S_CHAR}*"\""

WS  [ \t]
NWLINE "\n"

%x  BEGIN_COMMENT_MULTI
%x  BEGIN_COMMENT_SINGLE
%%


"auto" {return AUTO_;}
"break" {return BREAK_;}
"case" {return CASE_;}
"const" {return CONST_;}
"char" {return CHAR_;}
"continue" {return CONTINUE_;}
"default" {return DEFAULT_;}
"do" {return DO_;}
"double" {return DOUBLE_;}
"else" {return ELSE_;}
"enum" {return ENUM_;}
"extern" {return EXTERN_;}
"float" {return FLOAT_;}
"for" {return FOR_;}
"goto" {return GOTO_;}
"if" {return IF_;}
"inline" {return INLINE_;} 
"int" {return INT_;}
"long" {return LONG_;}
"register" {return REGISTER_;}
"restrict" {return RESTRICT_;}
"return" {return RETURN_;}
"short" {return SHORT_;}
"signed" {return SIGNED_;}
"sizeof" {return SIZEOF_;}
"static" {return STATIC_;}
"struct" {return STRUCT_;}
"switch" {return SWITCH_;}
"typedef" {return TYPEDEF_;}
"union" {return UNION_;}
"unsigned" {return UNSIGNED_;}
"void" {return VOID_;}
"voaltile" {return VOLATILE_;}
"while" {return WHILE_;}
"_Bool" {return BOOL_;}
"_Complex" {return COMPLEX_;}
"_Imaginary" {return IMAGINARY_;}
{KEYWORD}           {return KEYWORD_;}

"["            {return SQRBRK_OPEN_ ;}
"]"            {return SQRBRK_CLOSE_ ;}
"("            {return PAREN_OPEN_ ;}
")"            {return PAREN_CLOSE_ ;}
"{"            {return CURBRK_OPEN_ ;}
"}"            {return CURBRK_CLOSE_ ;}
"."            {return DOT_ ;}
"->"            {return ARROW_ ;}
"++"            {return INCR_ ;}
"--"            {return DECR_ ;}
"&"            {return AND_ ;}
"*"            {return STAR_ ;}
"+"            {return PLUS_ ;}
"-"            {return MINUS_ ;}
"~"            {return TILDA_ ;}
"!"            {return NOT_ ;}
"/"            {return SLASH_ ;}
"%"            {return PERCENT_ ;}
"<<"            {return LSHFT_ ;}
">>"            {return RSHFT_ ;}
"<"            {return LESS_ ;}
">"            {return GRTH_ ;}
"<="            {return LESSE_ ;}
">="            {return GRTHE_ ;}
"=="            {return EQUALS_ ;}
"!="            {return NOTEQ_ ;}
"^"            {return XOR_ ;}
"|"            {return OR_ ;}
"&&"            {return ANDAND_ ;}
"||"            {return OROR_ ;}
"?"            {return QUES_ ;}
":"            {return COLON_ ;}
";"            {return SEMICOLON_ ;}
"..."            {return TRPDOTS_ ;}
"="            {return ASSGN_ ;}
"*="            {return ASSGNMUL_ ;}
"/="            {return ASSGNDIV_ ;}
"%="            {return ASSGNPERCENT_ ;}
"+="            {return ASSGNPLUS_ ;}
"-="            {return ASSGNMINUS_ ;}
"<<="            {return ASSGNLSHT_ ;}
">>="            {return ASSGNRSHT_ ;}
"&="            {return ASSGNAND_ ;}
"^="            {return ASSGNXOR_ ;}
"|="            {return ASSGNOR_ ;}
","            {return COMMA_ ;}
"#"            {return HASH_ ;}
{PUNCTUATOR}        {return 
    PUNCTUATOR_;
}
{IDENTIFIER}        {
    //cout<<"Hi : "<<"\n";
    yylval.smPtr = ST->lookup(string(yytext));
   // cout<<"Hi\n";
    return IDENTIFIER_;}
{INTEGER_CONSTANT}  {
    yylval.Int = yytext;
    return INTEGER_CONSTANT_;}
{FLOAT_CONSTANT}    {
    yylval.Float = yylval.Double = yytext;
    
    return FLOAT_CONSTANT_;}
{CHARACTER_CONSTANT}    {
    yylval.Char = yytext;
    return CHARACTER_CONSTANT_;}
{STRING_LITERAL}    {
    yylval.String = yytext;
    return STRING_LITERAL_;}
<INITIAL>"/*"   {BEGIN(BEGIN_COMMENT_MULTI);}
<BEGIN_COMMENT_MULTI>[^*\n]*    {}
<BEGIN_COMMENT_MULTI>"\n"   {lineNo++;}
<BEGIN_COMMENT_MULTI>"*"+[^*/]  {}
<BEGIN_COMMENT_MULTI>"*"+"/" {BEGIN(INITIAL);}
<INITIAL>"//" {BEGIN(BEGIN_COMMENT_SINGLE);}
<BEGIN_COMMENT_SINGLE>[^\n]*    {}
<BEGIN_COMMENT_SINGLE>"\n"      {BEGIN(INITIAL);lineNo++;}
{WS}    {}
{NWLINE} {lineNo++;}
%%

/*

int main()
{
    int curr;
    while(curr=yylex())
    {
        switch(curr){
            case KEYWORD_ :printf("<KEYWORD,%s>\n",yytext);break;
            //Identifier            
            case IDENTIFIER_ :  printf("<IDENTIFIER, %s>\n",yytext);break;
            //Constants
            case FRACTIONAL_CONSTANT_ : printf("<FRACTIONAL_CONSTANT, %s>\n",yytext);break;
            case FLOAT_CONSTANT_ : printf("<FLOAT, %s>\n",yytext);break;
            case CHARACTER_CONSTANT_ :printf("<CHARACTER_CONSTANT_, %s>\n",yytext);break;
            case STRING_LITERAL_ : printf("<STRING_LITERAL, %s>\n",yytext);break;
            case ENUMERATION_CONSTANT_ : printf("<ENUMERATION_CONSTANT, %s>\n",yytext);break;
            case INTEGER_CONSTANT_ : printf("<INTEGER_CONSTANT, %s>\n",yytext);break;
            //Comments
            case MULTI_COMMENT_START_ : printf("<MULTI_COMMENT_START>\n");break;
            case MULTI_COMMENT_BODY_ : printf("<MULTI_COMMENT_BODY,%s>\n",yytext);break;
            case MULTI_COMMENT_END_ : printf("<MULTI_COMMENT_END>\n");break;
            case SINGLE_COMMENT_START_ : printf("<SINGLE_COMMENT_START>\n");break;
            case SINGLE_COMMENT_BODY_ : printf("<SINGLE_COMMENT_BODY,%s>\n",yytext);break;
            case SINGLE_COMMENT_END_ : printf("<SINGLE_COMMENT_END>\n");break;
            //Keywords
            case AUTO_ : printf("<KEYWORD,AUTO>\n");break;
            case BREAK_ : printf("<KEYWORD,BREAK>\n");break;
            case CASE_ : printf("<KEYWORD,CASE>\n");break;
            case CHAR_ : printf("<KEYWORD,CHAR>\n");break;
            case CONST_ : printf("<KEYWORD,CONST>\n");break;
            case CONTINUE_ : printf("<KEYWORD,CONTINUE>\n");break;
            case DEFAULT_ : printf("<KEYWORD,DEFAULT>\n");break;
            case DO_ : printf("<KEYWORD,DO>\n");break;
            case DOUBLE_ : printf("<KEYWORD,DOUBLE>\n");break;
            case ELSE_ : printf("<KEYWORD,ELSE>\n");break;
            case ENUM_ : printf("<KEYWORD,ENUM>\n");break;
            case EXTERN_ : printf("<KEYWORD,EXTERN>\n");break;
            case FLOAT_ : printf("<KEYWORD,FLOAT>\n");break;
            case FOR_ : printf("<KEYWORD,FOR>\n");break;
            case GOTO_ : printf("<KEYWORD,GOTO>\n");break;
            case IF_ : printf("<KEYWORD,IF>\n");break;
            case INLINE_ : printf("<KEYWORD,INLINE>\n");break;
            case INT_ : printf("<KEYWORD,INT>\n");break;
            case LONG_: printf("<KEYWORD,LONG>\n");break;
            case REGISTER_ : printf("<KEYWORD,REGISTER_>\n");break;
            case RESTRICT_ :printf("<KEYWORD,RESTRICT>\n");break;
            case RETURN_ :printf("<KEYWORD,RETURN>\n");break;
            case SHORT_ :printf("<KEYWORD,SHORT>\n");break;
            case SIGNED_ :printf("<KEYWORD,SIGNED>\n");break;
            case SIZEOF_ :printf("<KEYWORD,SIZEOF>\n");break;
            case STATIC_ :printf("<KEYWORD,STATIC>\n");break;
            case STRUCT_ :printf("<KEYWORD,STRUCT>\n");break;
            case SWITCH_ :printf("<KEYWORD,SWITCH>\n");break;
            case TYPEDEF_ :printf("<KEYWORD,TYPEDEF>\n");break;
            case UNION_ :printf("<KEYWORD,UNION>\n");break;
            case UNSIGNED_ :printf("<KEYWORD,UNSIGNED>\n");break;
            case VOID_ :printf("<KEYWORD,VOID>\n");break;
            case VOLATILE_ :printf("<KEYWORD,VOLATILE\n");break;
            case WHILE_ :printf("<KEYWORD,WHILE\n");break;
            case BOOL_ :printf("<KEYWORD,BOOL\n");break;
            case COMPLEX_ :printf("<KEYWORD,COMPLEX_\n");break;
            case IMAGINARY_ :printf("<KEYWORD,IMAGINARY\n");break;
            //Punctuators
            case SQRBRK_OPEN_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case SQRBRK_CLOSE_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case PAREN_OPEN_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case PAREN_CLOSE_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case CURBRK_OPEN_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case CURBRK_CLOSE_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case DOT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ARROW_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case INCR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case DECR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case AND_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case STAR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case PLUS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case MINUS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case TILDA_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case NOT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case SLASH_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case PERCENT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case LSHFT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case RSHFT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case LESS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case GRTH_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case LESSE_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case GRTHE_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case EQUALS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case NOTEQ_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case XOR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case OR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ANDAND_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case OROR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case QUES_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case COLON_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case SEMICOLON_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case TRPDOTS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGN_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNMUL_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNDIV_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNPERCENT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNPLUS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNMINUS_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNLSHT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNRSHT_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNAND_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNXOR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case ASSGNOR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case COMMA_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case HASH_ :printf("<PUNCTUATOR,%s>\n",yytext);break;
            case PUNCTUATOR_ :printf("<PUNCTUATOR,%s>\n",yytext);break;

        }
    }
    return 0;
    //
}


*/