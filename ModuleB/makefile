cls: Cadd.o Cchange.o CCHUSHI.o Cdelate.o CGET.o CPUT.o Csearch.o
	gcc -o cls -c Cadd.o Cchange.o CCHUSHI.o Cdelate.o CGET.o CPUT.o Csearch.o
	ar -rvs ../RELEASE/libC_all.a *o
Cadd.o:Cadd.c mB.h
	gcc -c Cadd.c
Cchange.o:Cchange.c mB.h
	gcc -c Cchange.c
CCHUSHI.o:CCHUSHI.c mB.h
	gcc -c CCHUSHI.c
CGET.o:CGET.c mB.h
	gcc -c CGET.c
CPUT.o:CPUT.c mB.h
	gcc -c CPUT.c
Csearch.o:Csearch.c mB.h
	gcc -c Csearch.c

.PHONY:clean
clean:
	rm -rf *.o cls

