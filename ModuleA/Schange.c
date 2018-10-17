#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mA.h"
int Schange()
{
	char name[10];
    int i=0,j,flag;
	printf("\n请输入想修改的学生的姓名:");
	scanf("%s",name);
	getchar();
	for(j=0; j<lens; j++)
	{
		if(strcmp(s[j].stu_name,name)==0)
		{
			break;
		}
	}
	if(j==lens)
	{
		printf("\n没有这名学生!\n");
		return 0;
	}
	printf("%-4s %8s\t    %-8s %-8s %-8s %4d\n",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
	while(1)
	{
		char subject[20];
		printf("\n							请输入修改的项目 \n");
	    printf("\n							------------------ \n");
		printf("\n							 1.学 号      \n");
		printf("\n							 2.选 课 1     \n");
	    printf("\n							 3.选 课 2     \n");
	    printf("\n							 4.选 课 3     \n");
	    printf("\n							 5.总 学 分    \n");
	    printf("\n							 6.退 出    \n");
	    printf("请给我一个数字：");
	    scanf("%d",&flag);
		getchar();
		if(flag==1)
		{
			printf("\n请输入学生学号：");
			scanf("%s",s[j].stu_id);
			getchar();
		}
		else if(flag==2)
		{
			change_sub(subject,0,j);

		}
		else if(flag==3)
		{
			change_sub(subject,1,j);
		}
		else if(flag==4)
		{
			change_sub(subject,2,j);
		}
		else if(flag==5)
		{
			printf("\n请输入学生总学分：");
			scanf("%d",&s[j].sum);
			getchar();
		}
		else if(flag==6)
		{
			break;
		}
		else
		{
			printf("\n输入错误!\n");
			continue;
		}
	 }
	printf("\n      修改后的学生信息\n");
	FILE *f;
	if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
	{
		printf("文件打开失败!\n");
	}
	fprintf(f,"%-8s %-8s %-4s %8s\t    %-8s %-8s %-8s %4d\n","STU","Schange",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
    fclose(f);
	SPUT();

	   return 0;
}

