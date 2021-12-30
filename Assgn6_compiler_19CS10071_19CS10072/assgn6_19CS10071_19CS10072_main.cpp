#include<bits/stdc++.h>
using namespace std;
#include "assgn6_19CS10071_19CS10072_translator.h"
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
    ST = createSymTab();
    globalST = ST;
    
    try{
        yyparse();
        
        flattenST();
        //lazily set the offsets
        for(auto itr:symTabList){
            itr->lazySetOffset();
        }  
        cout<<"\n\n-----------Printting the 3 Address Code-----------\n";
        quadArr.print();
        cout<<"-----------Printing the symbol tables------------\n";
        for(auto itr:symTabList){
            itr->print();
        }
        genAsm(string(argv[1]));
        
    }catch(typeError &e){
        cout<<e.what()<<"\n";
    }catch(exception &e){
        cout<<e.what()<<"\n";
    }
    
    
    return 0;

}