#!/bin/bash

#########################################################################
# File Name: app.sh
# Created on: 2018-10-16 17:26:52
# Author: VIM
# Last Modified: 2018-10-16 17:26:52
# Description: 
#########################################################################
cd .. 
rm app
make
cd ModuleA
make clean
cd ..
cd ModuleB
make clean
cd ..
./app
