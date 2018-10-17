#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mA.h"
int Sadd()
{
	stu a;
    int i,j;
	printf("\n请输入你要输入的学生信息：\n");
    printf("请输入学生的学号：");
    scanf("%s",a.stu_id);
    getchar();
    printf("\n请输入学生的姓名：");
    scanf("%s",a.stu_name);
    getchar();
	CCHUSHI();
	CGET();
	a.sum=0;
	while(1)
	{
		printf("\n请输入学生的选课1信息：");
	    scanf("%s",a.stu_class[0]);
		getchar();
		if(strcmp(a.stu_class[0],"null")==0)
		{
			break;
		}
		int fmax=0,fhave=0;
		for(j=0;j<lenc;j++)
		{
			if(strcmp(a.stu_class[0],c[j].class_name)==0)
			 {
				fhave=1;
				int n1=c[j].class_number;
				int n2=c[j].class_maxinum;
				if(n1 < n2)
				{
					a.sum += c[j].class_score;
					c[j].class_number++;
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

	while(1)
	{
		printf("\n请输入学生的选课2信息：");
	    scanf("%s",a.stu_class[1]);
		getchar();
		if(strcmp(a.stu_class[1],"null")==0)
		{
			break;
		}
		int fmax=0,fhave=0;
		for(j=0;j<lenc;j++)
		{
			if(strcmp(a.stu_class[1],c[j].class_name)==0)
			 {
				fhave=1;
				int n1=c[j].class_number;
				int n2=c[j].class_maxinum;
				if(n1 < n2)
				{
					a.sum += c[j].class_score;
					c[j].class_number++;
					fmax=1;
					break;
				}

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

	while(1)
	{
		printf("\n请输入学生的选课3信息：");
	    scanf("%s",a.stu_class[2]);
		getchar();
		if(strcmp(a.stu_class[2],"null")==0)
		{
			break;
		}
		int fmax=0,fhave=0;
		for(j=0;j<lenc;j++)
		{
			if(strcmp(a.stu_class[2],c[j].class_name)==0)
			 {
				fhave=1;
				int n1=c[j].class_number;
				int n2=c[j].class_maxinum;
				if(n1 < n2)
				{
					a.sum += c[j].class_score;
					c[j].class_number++;
					fmax=1;
					break;
				}

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

	//printf("\n请输入学生的总学分：");
   // scanf("%d",&a.sum);
   // getchar();

	CPUT();

	printf("\n添加成功！\n");
	printf("\n		增加后的学生信息\n");
    s[lens]=a;


	FILE *f;
	if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
	{
		printf("文件打开失败!\n");
	}
	fprintf(f,"%-8s %-8s %-4s %8s\t    %-8s %-8s %-8s %4d\n","STU","Sadd",s[lens].stu_id,s[lens].stu_name,s[lens].stu_class[0],s[lens].stu_class[1],s[lens].stu_class[2],s[lens].sum);
    fclose(f);


	lens++;
	return 0;
}
