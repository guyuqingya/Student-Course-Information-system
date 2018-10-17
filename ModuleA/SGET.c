#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
#include"mA.h"
int SGET()
{

    FILE *fp;
    int i=0;
    if((fp=fopen("./RELEASE/student.txt","r"))==NULL)
    {
        printf("文件打开失败！\n");
        return 0;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s %s %s %s %s %d",s[i].stu_id,s[i].stu_name,s[i].stu_class[0],s[i].stu_class[1],s[i].stu_class[2],&s[i].sum);
        i++;
    }
    lens=i-1;
	fclose(fp);
}
