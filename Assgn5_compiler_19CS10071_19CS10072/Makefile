

test: tinyC
	@echo "\n***********COMPILING THE FILES AND GENERATING ASSEMBLY and QUADS\n"

	./tinyC assgn6_19CS10071_19CS10072_test1.c >assgn6_19CS10071_19CS10072_quads1.out
	./tinyC assgn6_19CS10071_19CS10072_test2.c >assgn6_19CS10071_19CS10072_quads2.out
	./tinyC assgn6_19CS10071_19CS10072_test3.c >assgn6_19CS10071_19CS10072_quads3.out
	./tinyC assgn6_19CS10071_19CS10072_test4.c >assgn6_19CS10071_19CS10072_quads4.out
	./tinyC assgn6_19CS10071_19CS10072_test5.c >assgn6_19CS10071_19CS10072_quads5.out
	./tinyC assgn6_19CS10071_19CS10072_test6.c >assgn6_19CS10071_19CS10072_quads6.out

	@echo "\n***********ASSEMBLING THE FILES WITH GCC AND GENERATING EXECUTABLES\n"

	gcc -o test1 19CS10071_19CS10072_test1.c.s -L. -lass2_19CS10071 -no-pie
	gcc -o test2 19CS10071_19CS10072_test2.c.s -L. -lass2_19CS10071 -no-pie
	gcc -o test3 19CS10071_19CS10072_test3.c.s -L. -lass2_19CS10071 -no-pie
	gcc -o test4 19CS10071_19CS10072_test4.c.s -L. -lass2_19CS10071 -no-pie
	gcc -o test5 19CS10071_19CS10072_test5.c.s -L. -lass2_19CS10071 -no-pie
	gcc -o test6 19CS10071_19CS10072_test6.c.s -L. -lass2_19CS10071 -no-pie


	@echo "Use ./test<i> to run ith test i = 1,...,6 "

tinyC:	 y.tab.o lex.yy.o assgn6_19CS10071_19CS10072_main.cpp assgn6_19CS10071_19CS10072_translator.o libass2_19CS10071.a ass2_19CS10071.o assgn6_19CS10071_19CS10072_target_translator.o
	
	g++ -o tinyC lex.yy.o y.tab.o assgn6_19CS10071_19CS10072_translator.o assgn6_19CS10071_19CS10072_target_translator.o assgn6_19CS10071_19CS10072_main.cpp  -ll
	
lex.yy.o : lex.yy.c
	g++ -c lex.yy.c

y.tab.o : y.tab.c
	g++ -c y.tab.c

assgn6_19CS10071_19CS10072_translator.o : assgn6_19CS10071_19CS10072_translator.h
	g++ -c assgn6_19CS10071_19CS10072_translator.cxx

assgn6_19CS10071_19CS10072_target_translator.o : assgn6_19CS10071_19CS10072_translator.h
	g++ -c assgn6_19CS10071_19CS10072_target_translator.cxx

lex.yy.c : assgn6_19CS10071_19CS10072.l y.tab.h
	flex	assgn6_19CS10071_19CS10072.l

y.tab.c :
	bison -dty assgn6_19CS10071_19CS10072.y 
y.tab.h :
	bison -dty assgn6_19CS10071_19CS10072.y 


clean:
	rm lex.yy.c y.tab.h *.o y.tab.c *.a 
bclean:	
	rm  y.tab.h *.o y.tab.c 



libass2_19CS10071.a:  ass2_19CS10071.o
	ar -rcs libass2_19CS10071.a ass2_19CS10071.o

ass2_19CS10071.o:	ass2_19CS10071.c
	gcc -c ass2_19CS10071.c

a.out : tinyC
	./tinyC $(arg1)
	gcc -c $(arg1).s
	gcc $(arg1).o -L. -lass2_19CS10071 -no-pie




