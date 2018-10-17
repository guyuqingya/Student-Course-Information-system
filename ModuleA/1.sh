#!/bin/bash

#########################################################################
# File Name: 1.sh
# Created on: 2018-10-16 09:26:17
# Author: VIM
# Last Modified: 2018-10-16 09:26:17
# Description: 
#########################################################################
gcc -c change_sub.c -o change_sub.o
gcc -c make.c -o make.o
gcc -c Sadd.c -o Sadd.o
gcc -c Schange.c -o Schange.o
gcc -c SCHUSHI.c -o SCHUSHI.o
gcc -c Sdelate.c -o Sdelate.o
gcc -c SGET.c -o SGET.o
gcc -c SPUT.c -o SPUT.o
gcc -c Ssearch.c -o Ssearch.o

ar -rsv libS_all.a *.o

mv libS_all.a  ../RELEASE

rm *.o
