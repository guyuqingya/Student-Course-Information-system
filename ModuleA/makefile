stu:change_sub.o make.o Sadd.o Schange.o Ssearch.o SCHUSHI.o Sdelate.o SGET.o SPUT.o
	gcc -o stu -c change_sub.o make.o Sadd.o Schange.o Ssearch.o SCHUSHI.o Sdelate.o SGET.o SPUT.o 
	ar -rvs ../RELEASE/libS_all.a *o
change_sub.o: change_sub.c mA.h
	gcc -c change_sub.c 
make.o: make.c mA.h
	gcc -c make.c 
Sadd.o: Sadd.c mA.h
	gcc -c Sadd.c
Schange.o: Schange.c mA.h
	gcc -c Schange.c 
Ssearch.o:Ssearch.c mA.h
	gcc -c Ssearch.c 
SCHUSHI.o: SCHUSHI.c mA.h
	gcc -c SCHUSHI.c 
Sdelate.o:Sdelate.c mA.h
	gcc -c Sdelate.c 
SGET.o:SGET.c mA.h
	gcc -c SGET.c 
SPUT.o:SPUT.c mA.h
	gcc -c SPUT.c 
.PHONY:clean
clean:
	rm -rf *.o stu
