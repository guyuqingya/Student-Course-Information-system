#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
#include"mB.h"
int CGET()
{
	FILE *fp;
    int i=0,j;
    if((fp=fopen("./RELEASE/class.txt","r"))==NULL)
    {
        printf("文件打开失败！\n");
        return 0;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s %s %s %d %d %d %d",c[i].class_id,c[i].class_name,c[i].class_quality,&c[i].class_time,&c[i].class_score,&c[i].class_number,&c[i].class_maxinum);
        i++;
    }
    lenc=i-1;
	fclose(fp);
}
