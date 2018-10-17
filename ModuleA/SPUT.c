#include<stdlib.h>
#include<stdio.h>
#include<string.h>   
#include"mA.h"
int SPUT()
{
	FILE *fp;
	if((fp=fopen("./RELEASE/student.txt","w"))==NULL)
	{
		printf("文件打开失败！\n");
		return 0;
	}
	printf("\n------------------------------------------------------\n");
	printf("学号    学生姓名    选课1    选课2    选课3    总学分\n");
	for(int j=0;j<lens;j++)
    {
        printf("%-4s %8s\t    %-8s %-8s %-8s %4d\n",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
		fprintf(fp,"%-4s %8s\t    %-8s %-8s %-8s %4d\n",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
    }
	fclose(fp);
}
