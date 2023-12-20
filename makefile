compilarOut: compilarBison compilarFlex compilarLexO compilarTabla compilarCommons
	gcc parserv3.tab.c lex.yy.o tabla.o commons.o -lfl -lm
compilarC: compilarFlex
	gcc lex.yy.c -o scanner -lfl
compilarFlex:
	flex scanner.l
compilarLexO:
	gcc -c lex.yy.c 
compilarBison:
	bison -d -v parserv3.y
compilarTabla:
	gcc -c tabla.c -o tabla.o
compilarCommons:
	gcc -c commons.c -o commons.o
clear:
	rm *.out *.yy.o *.yy.c *.output *.tab.c *.tab.h scanner *.o output.txt -f