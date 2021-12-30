%{

    #include<stdio.h>
    extern int yylex();
    extern char* yytext;
    extern int lineNo;
    void yyerror(char* s);
%}


%union {
    int Int;
    char* Punctuator;
    char* Id;
    float Float;
    double Double;
    char* String;
    char Char;
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

%token <String> IDENTIFIER_
%token <Double> FLOAT_CONSTANT_
%token <Char> CHARACTER_CONSTANT_
%token <String> STRING_LITERAL_
%token <String> ENUMERATION_CONSTANT_
%token <Int> INTEGER_CONSTANT_
%token <Double> FRACTIONAL_CONSTANT_

%nonassoc PAREN_CLOSE_
%nonassoc ELSE_
%start translation_unit

%%
constant:       FLOAT_CONSTANT_ {printf(" constant -> float cosntant \n");}
            |   CHARACTER_CONSTANT_ {printf(" constant -> character cosntant \n");}            
            |   ENUMERATION_CONSTANT_ {printf(" constant -> enumeration constant \n");}
            |   INTEGER_CONSTANT_ {printf(" constant -> integer cosntant \n");}
            |   FRACTIONAL_CONSTANT_ {printf(" constant -> fractional cosntant \n");}
            ;


primary_expression:     IDENTIFIER_ {printf("primary expression -> identifier\n");}
                    |   constant {printf("primary expression -> constant\n");}
                    |   STRING_LITERAL_ {printf("primary expression -> string literal\n");}
                    |   PAREN_OPEN_ expression PAREN_CLOSE_ {printf("primary expression -> ( expression )\n");}
                    ;


postfix_expression:     primary_expression {printf("postfix expression -> primary expression \n");}
                    |   postfix_expression SQRBRK_OPEN_ expression SQRBRK_CLOSE_ {printf("postfix expression -> postfix expression [ expression ] \n");}
                    |   postfix_expression PAREN_OPEN_ argument_expression_list_opt PAREN_CLOSE_ {printf("postfix expression -> postfix expression ( optional arg list) \n");}
                    |   postfix_expression DOT_ IDENTIFIER_ {printf("postfix expression -> postfix expression . identifier \n");}
                    |   postfix_expression ARROW_ IDENTIFIER_ {printf("postfix expression -> postfix expression -> identifier \n");}
                    |   postfix_expression INCR_ {printf("postfix expression -> postfix expression ++ \n");}
                    |   postfix_expression DECR_ {printf("postfix expression -> postfix expression -- \n");}
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ CURBRK_OPEN_ initializer_list CURBRK_CLOSE_ {printf("postfix expression -> ( type name ) { initializer list } \n");}
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ CURBRK_OPEN_ initializer_list COMMA_ CURBRK_CLOSE_ {printf("postfix expression -> ( type name , ) { initializer list } \n");}
                    ;

argument_expression_list_opt : argument_expression_list {printf("argument_expression_list_opt -> argument_expression_list \n");}
                             | {printf("argument_expression_list_opt -> epsilon \n");}
                             ;

argument_expression_list    :   assignment_expression { printf(" argument expression list -> assignment expression \n");}
                            |   argument_expression_list COMMA_ assignment_expression { printf(" argument expression list -> assignment expression list , assignment expression \n");}
                            ;


unary_expression:       postfix_expression {printf(" unary expression -> postfix expression \n");}
                    |   INCR_ unary_expression {printf(" unary expression -> ++ unary expression \n");}
                    |   DECR_ unary_expression {printf(" unary expression -> -- unary expression \n");}
                    |   unary_operator cast_expression {printf(" unary expression -> unary operator cast expression \n");}
                    |   SIZEOF_ unary_expression {printf(" unary expression -> sizeof unary expression \n");}
                    |   SIZEOF_ PAREN_OPEN_ type_name PAREN_CLOSE_ {printf(" unary expression -> sizeof ( type name ) \n");}
                    ;


unary_operator:     AND_    {printf("unary operator -> & \n");}
                |   STAR_   {printf("unary operator -> * \n");}
                |   PLUS_   {printf("unary operator -> + \n");}
                |   MINUS_  {printf("unary operator -> - \n");}
                |   TILDA_  {printf("unary operator -> ~ \n");}
                |   NOT_    {printf("unary operator -> ! \n");}
                ;



cast_expression:        unary_expression    {printf("cast expression -> unary expression \n");}
                    |   PAREN_OPEN_ type_name PAREN_CLOSE_ cast_expression {printf(" cast expression -> ( type name ) cast expression \n");}
                    ;


multiplicative_expression:      cast_expression {printf("multiplicative expression -> cast expression \n");}
                            |   multiplicative_expression STAR_ cast_expression {printf("multiplicative expression -> multiplicative expression * cast expression \n");}
                            |   multiplicative_expression SLASH_ cast_expression {printf("multiplicative expression -> multiplicative expression / cast expression \n");}
                            |   multiplicative_expression PERCENT_ cast_expression {printf("multiplicative expression -> multiplicative expression %% cast expression \n");}
                            ;


additive_expression:        multiplicative_expression {printf("additive expression -> multiplicative expresssion \n");}
                        |   additive_expression PLUS_ multiplicative_expression {printf("additive expression -> additive expression + multiplicative expresssion \n");}
                        |   additive_expression MINUS_ multiplicative_expression {printf("additive expression -> additive expression - multiplicative expresssion \n");}
                        ;


shift_expression:           additive_expression {printf("shift expression -> additive expresssion \n");}
                        |   shift_expression LSHFT_ additive_expression {printf("shift expression -> shift expression << additive expresssion \n");}
                        |   shift_expression RSHFT_ additive_expression {printf("shift expression -> shift expression >> additive expresssion \n");}
                        ;


relational_expression:      shift_expression  {printf("realtional expression -> shift expression \n");}
                        |   relational_expression LESS_ shift_expression  {printf("realtional expression -> relational expression < shift expression \n");}
                        |   relational_expression GRTH_ shift_expression  {printf("realtional expression -> relational expression > shift expression \n");}
                        |   relational_expression LESSE_ shift_expression  {printf("realtional expression -> relational expression <= shift expression \n");}
                        |   relational_expression GRTHE_ shift_expression {printf("realtional expression -> relational expression >= shift expression \n");}
                        ; 

equality_expression:        relational_expression {printf("equality expression -> relational expression \n");}
                        |   equality_expression EQUALS_ relational_expression {printf("equality expression -> equality expression == relational expression \n");}
                        |   equality_expression NOTEQ_ relational_expression {printf("equality expression -> equality expression != relational expression \n");}
                        ;

AND_expression:             equality_expression {printf("AND expression -> equality expression \n");}
                        |   AND_expression AND_ equality_expression {printf("AND expression -> AND expression & equality expression \n");}
                        ;


exclusive_OR_expression:        AND_expression {printf("exclusive OR expression -> AND expression \n");}
                            |   exclusive_OR_expression XOR_ AND_expression {printf("exclusive OR expression -> exclusive OR expression ^ AND expression \n");}
                            ;

inclusive_OR_expression:        exclusive_OR_expression {printf("inclusive OR expression -> exclusive OR expression \n");}
                            |   inclusive_OR_expression OR_ exclusive_OR_expression {printf("inclusive OR expression -> inclusive OR expression | exclusive OR expression \n");}
                            ;


logical_AND_expression:         inclusive_OR_expression {printf("logical AND expression -> inclusive OR expression \n");}
                            |   logical_AND_expression ANDAND_ inclusive_OR_expression {printf("logical AND expression -> logical AND expression && inclusive OR expression \n");}
                            ;


logical_OR_expression:          logical_AND_expression {printf("logical OR expression -> logical AND expression \n");}
                            |   logical_OR_expression OROR_ logical_AND_expression {printf("logical OR expression -> logical OR expression || logical AND expression \n");}
                            ;


conditional_expression:         logical_OR_expression {printf("conditional expression -> logical OR expression\n");}
                            |   logical_OR_expression QUES_ expression COLON_ conditional_expression {printf("conditional expression -> logical OR Expression ? expression : logical OR expression\n");}
                            ;

assignment_expression:          conditional_expression {printf("assignment expression -> conditional expression \n");}
                            |   unary_expression assignment_operator assignment_expression {printf("assignment expression -> unary expression assignment operator assignment expression \n");}
                            ;

assignment_operator:            ASSGN_  {printf("assignment operator -> = \n");}
                            |   ASSGNMUL_ {printf("assignment operator -> *= \n");}
                            |   ASSGNDIV_ {printf("assignment operator -> /= \n");}
                            |   ASSGNPERCENT_ {printf("assignment operator -> %%= \n");}
                            |   ASSGNPLUS_ {printf("assignment operator -> += \n");}
                            |   ASSGNMINUS_ {printf("assignment operator -> -= \n");}
                            |   ASSGNLSHT_ {printf("assignment operator -> <<= \n");}
                            |   ASSGNRSHT_ {printf("assignment operator -> >>= \n");}
                            |   ASSGNAND_ {printf("assignment operator -> &= \n");}
                            |   ASSGNOR_ {printf("assignment operator -> |= \n");}
                            |   ASSGNXOR_ {printf("assignment operator -> ^= \n");}
                            ;

expression:                     assignment_expression   {printf("expression -> assignment exprression \n");}
                            |   expression COMMA_ assignment_expression {printf("expression -> expression , assignment exprression \n");}
                            ;


constant_expression:            conditional_expression {printf("constant expression -> conditional expression \n");}
                            ;



declaration:                    declaration_specifiers init_declarator_list_opt SEMICOLON_ {printf("declaration -> declaration specifiers init declarator list ; \n");}
                            ;
init_declarator_list_opt : init_declarator_list {printf("init_declarator_list_opt -> init_declarator_list \n");}
                         | {printf("init_declarator_list_opt -> epsilon \n");}
                         ;

declaration_specifiers:         storage_class_specifier declaration_specifiers_opt {printf("declaration specifiers -> storage class specifier declaration specifiers list optional \n");}
                            |   type_specifier declaration_specifiers_opt {printf("declaration specifiers -> type specifier declaration specifiers list optional \n");}
                            |   type_qualifier declaration_specifiers_opt {printf("declaration specifiers -> type qualifier declaration specifiers list optional \n");}
                            |   function_specifier declaration_specifiers_opt {printf("declaration specifiers -> function specifier declaration specifiers list optional \n");}
                            ;
declaration_specifiers_opt : declaration_specifiers {printf("declaration_specifiers_opt -> declaration_specifiers \n");}
                           | {printf("declaration_specifiers_opt -> epsilon \n");}
                           ;

init_declarator_list:           init_declarator {printf("init declarator list -> init declarator \n");}
                            |   init_declarator_list COMMA_ init_declarator {printf("init declarator list -> init declarator list , init declarator \n");} 
                            ;

init_declarator:                declarator {printf("init declarator -> declarator \n");}
                            |   declarator ASSGN_ initializer {printf("init declarator -> declarator = initializer \n");}
                            ;

identifier_list_opt : identifier_list {printf("identifier_list_opt -> identifier_list\n");}
                    | {printf("identifier_list_opt -> epsilon\n");}
                    ;


/*Declarations*/
storage_class_specifier : EXTERN_   {printf("storage_class_specifier -> extern\n");}
                        | STATIC_   {printf("storage_class_specifier -> static\n");}
                        | AUTO_     {printf("storage_class_specifier -> auto\n");}
                        | REGISTER_ {printf("storage_class_specifier -> register\n");}
                        ;

type_specifier : VOID_ {printf("type_specifier -> void\n");}
               | CHAR_ {printf("type_specifier -> char\n");}
               | SHORT_ {printf("type_specifier -> short\n");}
               | INT_ {printf("type_specifier -> int\n");}
               | LONG_ {printf("type_specifier -> long\n");}
               | FLOAT_ {printf("type_specifier -> float\n");}
               | DOUBLE_ {printf("type_specifier -> double\n");}
               | SIGNED_ {printf("type_specifier -> signed\n");}
               | UNSIGNED_ {printf("type_specifier -> unsigned\n");}
               | BOOL_ {printf("type_specifier -> Bool\n");}
               | COMPLEX_ {printf("type_specifier -> Complex\n");}
               | IMAGINARY_ {printf("type_specifier -> Imaginary\n");}
               | enum_specifier {printf("type_specifier -> enum_specifier\n");}
               ;


specifier_qualifier_list : type_specifier specifier_qualifier_list_opt {printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n");}
                         | type_qualifier specifier_qualifier_list_opt {printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n");}
                         ;

specifier_qualifier_list_opt : specifier_qualifier_list {printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n");}
                | {printf("specifier_qualifier_list_opt -> epsilon\n");}
                ;

enum_specifier : ENUM_ identifier_opt CURBRK_OPEN_ enumerator_list CURBRK_CLOSE_ {printf("enum_specifier -> enum identifier_opt { enumerator_list }\n");}
               | ENUM_ identifier_opt CURBRK_OPEN_ enumerator_list COMMA_ CURBRK_CLOSE_  {printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n");}
               | ENUM_ IDENTIFIER_ {printf("enum_specifier -> enum identifier \n");}
               ;

identifier_opt : IDENTIFIER_ {printf("identifier_opt -> identifier\n");}
               | {printf("identifier_opt -> epsilon\n");}
               ;

enumerator_list : enumerator {printf("enumerator_list -> enumerator\n");}
                | enumerator_list COMMA_ enumerator {printf("enumerator_list -> enumerator_list , enumerator\n");}
                ;

enumerator : ENUMERATION_CONSTANT_ {printf("enumerator -> enumerator_constant\n");}
           | ENUMERATION_CONSTANT_ ASSGN_ constant_expression {printf("enumerator -> enumerator_constant = constant_expression\n");}
           ;

type_qualifier : CONST_   {printf("type_qualifier -> const\n");}
               | RESTRICT_  {printf("type_qualifier -> restrict\n");}
               | VOLATILE_  {printf("type_qualifier -> volatile\n");}
               ;

function_specifier : INLINE_ {printf("function_specifier -> inline\n");}
                   ;

declarator : pointer_opt direct_declarator {printf("declarator -> pointer_opt direct_declarator\n");}
           ;

pointer_opt : pointer {printf("pointer_opt -> pointer\n");}
            | {printf("pointer_opt -> epsilon\n");}
            ;

direct_declarator : IDENTIFIER_ {printf("direct_declarator -> IDENTIFIER_\n");}
                  | PAREN_OPEN_ declarator PAREN_CLOSE_ {printf("direct_declarator -> ( declarator )\n");}
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list_opt assignment_expression_opt SQRBRK_CLOSE_ {printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expresion_opt ]  \n");}
                  | direct_declarator SQRBRK_OPEN_ STATIC_ type_qualifier_list_opt assignment_expression SQRBRK_CLOSE_ {printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expresion_opt ]  \n");}
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list STATIC_ assignment_expression SQRBRK_CLOSE_ {printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expresion_opt ]  \n");}
                  | direct_declarator SQRBRK_OPEN_ type_qualifier_list_opt STAR_ SQRBRK_CLOSE_ {printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]  \n");}
                  | direct_declarator PAREN_OPEN_ parameter_type_list PAREN_CLOSE_ {printf("direct_declarator -> direct_declarator ( parameter_type_list )\n");}
                  | direct_declarator PAREN_OPEN_ identifier_list_opt PAREN_CLOSE_  {printf("direct_declarator -> direct_declarator ( identifier_list )\n");}
                  ;

pointer : STAR_ type_qualifier_list_opt {printf("pointer -> * type_qualifier_list_opt\n");}
        | STAR_ type_qualifier_list_opt pointer  {printf("pointer -> * type_qualifier_list_opt pointer\n");}
        ;

type_qualifier_list_opt : type_qualifier_list  {printf("type_qualifier_list_opt -> type_qualifier_list\n");}
                        | {printf("type_qualifier_list_opt -> epsilon\n");}
                        ;

assignment_expression_opt : assignment_expression  {printf("assignment_expression_opt -> assignment_expression\n");}
                          | {printf("assignment_expression_opt -> epsilon\n");}
                          ;

type_qualifier_list : type_qualifier  {printf("type_qualifier_list -> type_qualifier\n");}
                    | type_qualifier_list type_qualifier   {printf("type_qualifier_list -> type_qualifier_list type_qualifier\n");}
                    ;

parameter_type_list : parameter_list {printf("parameter_type_list -> parameter_list\n");}
                    | parameter_list COMMA_ TRPDOTS_ {printf("parameter_type_list -> parameter_list , ...\n");}
                    ;

parameter_list : parameter_declaration {printf("parameter_list -> parameter_declaration\n");}
               | parameter_list COMMA_ parameter_declaration  {printf("parameter_list -> parameter_list , parameter_declaration\n");}
               ;



parameter_declaration : declaration_specifiers declarator {printf("parameter_declaration -> declaration_specifiers declarator\n");}
                      | declaration_specifiers {printf("parameter_declaration -> declaration_specifiers \n");}
                      ;

identifier_list : IDENTIFIER_ {printf("identifier_list -> identifier \n");}
                | identifier_list COMMA_ IDENTIFIER_ {printf("identifier_list -> identifier_list , identifier \n");}
                ;
type_name : specifier_qualifier_list {printf("type_name -> specifier_qualifier_list\n");}
          ;

initializer : assignment_expression {printf("initializer -> assignmeny_expression \n");}
            | CURBRK_OPEN_ initializer_list CURBRK_CLOSE_ {printf("initializer -> { initializer_list } \n");}
            | CURBRK_OPEN_ initializer_list COMMA_ CURBRK_CLOSE_ {printf("initializer -> { initializer_list , } \n");}
            ;

initializer_list : designation_opt initializer {printf("initializer_list -> designation_opt initializer\n");}
                 | initializer_list COMMA_ designation_opt initializer {printf("initializer_list -> initializer_list , designation_opt initializer\n");}
                 ;

designation_opt : designation {printf("designation_opt -> designation\n");}
                | {printf("designation_opt -> epsilon\n");}
                ;

designation : designator_list ASSGN_ {printf("designation -> designator_list =\n");}
            ;

designator_list : designator {printf("designator_list -> designator\n");}
                | designator_list designator {printf("designator_list -> designator_list designator\n");}
                ;

designator : SQRBRK_OPEN_ constant_expression SQRBRK_CLOSE_ {printf("[ constant_expression ]\n");}
           | DOT_ IDENTIFIER_  {printf(". identifier\n");}
           ;


/*Statements*/

statement : labeled_statement {printf("statement -> labeled_statement\n");}
          | compound_statement {printf("statement -> compound_statement\n");}
          | expression_statement {printf("statement -> expression_statement\n");}
          | selection_statement {printf("statement -> selection_statement\n");}
          | iteration_statement {printf("statement -> iteration_statement\n");}
          | jump_statement {printf("statement -> jump_statement\n");}
          ;

labeled_statement: IDENTIFIER_ COLON_ statement {printf("labeled_statement-> identifier : statement\n");}
                 | CASE_ constant_expression COLON_ statement {printf("labeled_statement-> CASE constant_expression : statement \n");}
                 | DEFAULT_ COLON_ statement {printf("labeled_statement -> DEFAULT : statement\n");}
                 ;

compound_statement : CURBRK_OPEN_ block_item_list_opt CURBRK_CLOSE_ {printf("compound_statement -> { block_item_list_opt}\n");}
                   ;

block_item_list_opt : block_item_list {printf("block_item_list_opt -> block_item_list \n");}
                    | {printf("block_item_list_opt -> epsilon\n");}
                    ;

block_item_list : block_item {printf("block_item_list -> block_item\n");}
                | block_item_list block_item {printf("block_item_list -> block_item_list block_item\n");}
                ;

block_item : declaration {printf("block_item -> declaration \n");}
           | statement {printf("block_item -> statement \n");}
           ;

expression_statement : expression_opt SEMICOLON_ {printf("expression_statement -> expression_opt ;\n");}
                     ;

expression_opt : expression {printf("expression_opt -> expression\n");}
               | {printf("expression_opt -> epsilon\n");} 
               ;

selection_statement : IF_ PAREN_OPEN_ expression PAREN_CLOSE_ statement {printf("selection_statement -> if ( expression ) statement\n");}
                    | IF_ PAREN_OPEN_ expression PAREN_CLOSE_ statement ELSE_ statement {printf("selection_statement -> if ( expression ) statement else statement\n");}
                    | SWITCH_ PAREN_OPEN_ expression PAREN_CLOSE_ statement {printf("selection_statement -> switch ( expression ) statement \n");}
                    ;

iteration_statement : WHILE_ PAREN_OPEN_ expression PAREN_CLOSE_ statement {printf("iteration_statement -> while ( expression ) statement\n");}
                    | DO_ statement WHILE_ PAREN_OPEN_ expression PAREN_CLOSE_ SEMICOLON_ {printf("iteration_statement -> do statement while ( expression ) ; \n");}
                    | FOR_ PAREN_OPEN_ expression_opt SEMICOLON_ expression_opt SEMICOLON_ expression_opt PAREN_CLOSE_ statement {printf("iteration_statement -> for(expression_opt ; expression_opt ; expression_opt) statement\n");}
                    | FOR_ PAREN_OPEN_ declaration expression_opt SEMICOLON_ expression_opt PAREN_CLOSE_ statement {printf("iteration_statement -> for (declaration expression_opt ; expression_opt ; expression_opt) statement\n");}
                    ;

jump_statement : GOTO_ IDENTIFIER_ SEMICOLON_ {printf("jump_statement -> goto identifier ;\n");}
               | CONTINUE_ SEMICOLON_ {printf("jump_statement -> continue ;\n");}
               | BREAK_ SEMICOLON_ {printf("jump_statement -> break ;\n");}
               | RETURN_ expression_opt SEMICOLON_ {printf("jump_statement -> return expression_opt ;\n");}
               ;

/*External Definations*/
translation_unit : external_declaration                   {printf("translation_unit->external_declaration\n");}
                 | translation_unit external_declaration  {printf("translation_unit->translation_unit external_declaration\n");}
                 ;

external_declaration: function_definition  {printf("external_declaration->function_definition\n");}
                    | declaration  {printf("external_declaration -> declaration\n");}
                    ;

declaration_list_opt : declaration_list {printf("declaration_list_opt -> declaration_list\n");}
                     | {printf("declaration_list_opt -> epsilon\n");}
                     ;

function_definition : declaration_specifiers declarator declaration_list_opt compound_statement {printf("function_definition --> declaration_specifiers declarator declaration_list_opt compound_statement\n");}
                    ;

declaration_list : declaration {printf("declaration_list -> declaration\n");}
                 | declaration_list declaration {printf("declaration_list -> declaration_list declaration\n");}
                 ;


%%

void yyerror(char *y){
    printf("Line %d: %s: %s\n",lineNo+1,yytext,y);//lineNo+1 gives current line number
}