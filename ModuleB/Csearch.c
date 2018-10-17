#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
#include"mB.h"
int Csearch()
{
	char name[10];
    int j,flag;
    printf("\n请输入要查找的课程名称：");
    scanf("%s",name);
    flag=0;
    for(j=0;j<lenc;j++)
    {
        if(strcmp(c[j].class_name,name)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("未找到要查看的课程！\n");
    }
    printf("\n			该课程的具体信息为：\n");
	printf("--------------------------------------------------------------------------\n");
    printf("课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
    printf("  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
    return 0;
}

