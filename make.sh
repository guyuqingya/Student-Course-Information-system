#!/bin/bash

#########################################################################
# File Name: make.sh
# Created on: 2018-10-16 09:29:32
# Author: VIM
# Last Modified: 2018-10-16 09:29:32
# Description: 
#########################################################################
cd ModuleA
. 1.sh
cd ..
cd ModuleB
. 1.sh
cd ..

gcc 11.c -o 11 -L ./RELEASE -lS_all -lall
