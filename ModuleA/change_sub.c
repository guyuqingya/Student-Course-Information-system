#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mA.h"
int change_sub(char *subject,int x, int j ) //subject要修改的课程名称，k要修改的选课，学生的下标j
{
	strcpy(subject,s[j].stu_class[x]);	
	CCHUSHI();
	CGET();
	while(1)
	{    
		printf("\n请输入学生的选课%d信息：",x+1);
		scanf("%s",s[j].stu_class[x]);
		getchar();
		if(strcmp(s[j].stu_class[x],"null")==0)
		{
			make(subject,s[j].stu_class[x],j); 
			break;
		}
		int fmax=0,fhave=0;
		for(int k=0;k<lenc;k++)
		{       
			if(strcmp(s[j].stu_class[x],c[k].class_name)==0)
			 {
				 fhave=1;
				 int n1=c[k].class_number;
		 		 int n2=c[k].class_maxinum;
				 if(n1 < n2)
				{
					make(subject,s[j].stu_class[x],j);
					fmax=1;
				}
				break;	
			 }
		}
		if(fhave==0)
		{
			printf("\n【没有这个选课！】\n");
		}
		else
		{
			if(fmax==0)
			{
				printf("\n【选课人数已达上限！】\n");
			}
			else
			{
				break;
			}
		}
	}
}
