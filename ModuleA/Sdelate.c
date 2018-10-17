#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mA.h"
int Sdelate()
{
	char name[10];
    int j,flag;
    printf("\n请输入要删除的学生的姓名：");
    scanf("%s",name);
	getchar();
    flag=0;
    for(j=0;j<lens;j++)
    {
        if(strcmp(s[j].stu_name,name)==0)
        {
            flag=1;
			break;
        }
    }
    if(flag==0)
    {
        printf("未找到要删除的学生！\n");
    }

	else
	{

		FILE *f;
		if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
		{
			printf("文件打开失败!\n");
		}
		fprintf(f,"%-8s %-8s %-4s %8s\t    %-8s %-8s %-8s %4d\n","STU","Sdelate",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
		fclose(f);

		CCHUSHI();
		CGET();
		for(int k=0; k<3; k++)
		{
			for(int q=0; q<lenc; q++)
			{
				if(strcmp(s[j].stu_class[k],c[q].class_name)==0)
				{
					c[q].class_number--;
				}
			}
		}
		CPUT();

		for(int i=j; i<lens; i++)
		{
			s[i]=s[i+1];
		}
		lens--;
		printf("\n      删除后的学生信息\n");
	}
    return 0;
}

