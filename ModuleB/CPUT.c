#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
#include"mB.h"
int CPUT()
{

	FILE *fp;
    int j;
    if((fp=fopen("./RELEASE/class.txt","w"))==NULL)
    {
        printf("文件打开失败！\n");
        return 0;
    }
	for(j=0;j<lenc;j++)
    {
        printf("  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
		fprintf(fp,"  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
    }
	fclose(fp);
}
