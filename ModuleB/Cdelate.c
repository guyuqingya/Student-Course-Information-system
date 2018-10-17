#include<stdio.h>
#include<stdlib.h>
#include"mB.h"
int Cdelate()
{
	char name[10];
    int j,flag;
    printf("\n请输入要删除的课程名称：");
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
        printf("未找到要删除的课程！\n");
    }
	else
	{
		SCHUSHI();
		SGET();

		FILE *f;
		if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
		{
			printf("文件打开失败!\n");
		}
		fprintf(f,"%-8s %-8s  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n","CLS","Cdelate",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
	    fclose(f);


		for( int p=0; p<lens; p++)
		{
			for(int q=0; q<3; q++)
			{
				if(strcmp(s[p].stu_class[q],c[j].class_name)==0)
				{
					strcpy(s[p].stu_class[q],"null");
					s[p].sum-=c[j].class_score;
					break;
				}
			}
		}
		SPUT();
		for(int i=j; j<lenc; j++)
		{
			c[i]=c[i+1];
		}
		lenc--;
		printf("\n				删除后课程的信息为：\n");
		printf("--------------------------------------------------------------------------\n");
		printf("\n课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
	}
    return 0;
}

