#include<stdio.h>
extern int yyparse();

extern char* yytext;
int main(int argc,char *argv[])
{
    freopen(argv[1], "r", stdin);  //Filename passed as cmd argument
    if(argc!=2) 
    {
        printf("Usage: ./a.out <filename> \n");
        return 0;
    }

    yyparse();
    return 0;

}