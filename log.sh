#!/bin/bash

#########################################################################
# File Name: log.sh
# Created on: 2018-10-17 15:25:56
# Author: VIM
# Last Modified: 2018-10-17 15:25:56
# Description: 
########################################################################
cd RELEASE
echo "修改学生信息的次数:`cat gyq.txt | grep "STU" | wc -l `"
echo ""
echo "修改课程信息的次数:`cat gyq.txt | grep "CLS" | wc -l`"
echo ""

read -p "请输入你要查找的学号:" Snumber
cat gyq.txt | awk '$1=="STU" && $3=='$Snumber' {printf $0 "\n"}'
echo ""

read -p "请输入你要查找的课程编号:" Cnumber
cat gyq.txt | awk '$1=="CLS" && $3=='$Cnumber' {printf $0 "\n"}' 
cd ..
