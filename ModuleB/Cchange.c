#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mB.h"
int Cchange()
{
	char name[10];
    int i=0,j,flag;
	printf("\n请输入想修改的课程名称:");
	scanf("%s",name);
	getchar();
	for(j=0; j<lenc; j++)
	{
		if(strcmp(c[j].class_name,name)==0)
		{
			break;
		}
	}
	if(j==lenc)
	{
		printf("\n没有这个课程!\n");
		return 0;
	}
	printf("  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
	while(1)
	{
		printf("\n							请输入修改的项目 \n");
	    printf("\n							------------------ \n");
		printf("\n							 1.课 程 编 号      \n");
		printf("\n							 2.课 程 性 质     \n");
	    printf("\n							 3.授 课 学 时     \n");
	    printf("\n							 4.学 分     \n");
	    printf("\n							 5.已 选 人 数    \n");
	    printf("\n							 6.课程人数上限    \n");
	    printf("\n							 7.退出\n");
		printf("请给我一个数字：");
	    scanf("%d",&flag);
		getchar();
		if(flag==1)
		{
			printf("\n请输入课程编号：");
            scanf("%s",c[j].class_id);
			getchar();
		}
		else if(flag==2)
		{
			 printf("\n请输入课程性质：");
             scanf("%s",c[j].class_quality);
			getchar();
		}
		else if(flag==3)
		{
			printf("\n请输入授课学时：");
            scanf("%d",&c[j].class_time);
			getchar();
		}
		else if(flag==4)
		{
			printf("\n请输入学分：");
            scanf("%d",&c[j].class_score);
			getchar();
		}
		else if(flag==5)
		{
			printf("\n请输入课程已选人数：");
            scanf("%d",&c[j].class_number);
			getchar();
		}
		else if(flag==6)
		{
			printf("\n请输入课程人数上限：");
            scanf("%d",&c[j].class_maxinum);
			getchar();
		}
		else if(flag==7)
		{
			break;
		}
		else
		{
			printf("\n输入错误!\n");
			continue;
		}
	 }
	printf("\n			修改后的具体信息为：\n");
	printf("--------------------------------------------------------------------------\n");
    printf("课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
	FILE *f;
		if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
		{
			printf("文件打开失败!\n");
		}
		fprintf(f,"%-8s %-8s  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n","CLS","Cchange",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
	    fclose(f);
	CPUT();

	   return 0;
}

