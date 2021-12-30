

a.out:	 y.tab.o lex.yy.o assgn4_19CS10071_19CS10072_main.c
	gcc	 lex.yy.o y.tab.o assgn4_19CS10071_19CS10072_main.c -ll
	
lex.yy.o : lex.yy.c
	gcc -c lex.yy.c

y.tab.o : y.tab.c
	gcc -c y.tab.c



lex.yy.c : assgn4_19CS10071_19CS10072.l y.tab.h
	flex	assgn4_19CS10071_19CS10072.l

y.tab.c :
	bison -dty assgn4_19CS10071_19CS10072.y 
y.tab.h :
	bison -dty assgn4_19CS10071_19CS10072.y 


clean:
	rm lex.yy.c y.tab.h *.o y.tab.c 

