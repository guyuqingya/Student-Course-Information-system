#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mA.h"
//原来的学分减掉，课程人数减1， 新的学分加上，课程人数加1
int make(char *old,char *new ,int j) //old 原来的课程，new 新的课程，学生的下表为j
{
	CCHUSHI();
	CGET();
	for(int i=0; i<lenc; i++)
	{
		if( strcmp(old,c[i].class_name)==0 )
		{
			c[i].class_number--;
			s[j].sum-=c[i].class_score;
		}
		else if( strcmp(new,c[i].class_name)==0 )
		{
			c[i].class_number++;
			s[j].sum+=c[i].class_score;
		}
	}
	printf("\n		课程信息\n");
	CPUT();
}
