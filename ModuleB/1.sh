#!/bin/bash

#########################################################################
# File Name: 1.sh
# Created on: 2018-10-15 21:01:03
# Author: VIM
# Last Modified: 2018-10-15 21:01:03
# Description: 
#########################################################################

gcc -c Cadd.c -o Cadd.o
gcc -c Cchange.c -o Cchange.o
gcc -c CCHUSHI.c -o CCHUSHI.o
gcc -c Cdelate.c -o Cdelate.o
gcc -c CGET.c -o CGET.o
gcc -c Csearch.c -o Csearch.o
gcc -c CPUT.c -o CPUT.o

ar -rsv liball.a *.o

mv liball.a  ../RELEASE

rm *.o
