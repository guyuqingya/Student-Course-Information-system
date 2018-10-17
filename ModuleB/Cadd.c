#include<stdio.h>
#include<stdlib.h>
#include"mB.h"
int Cadd()
{
	cls a;
    printf("\n请输入你要输入的课程信息：\n");
    printf("请输入课程编号：");
    scanf("%s",a.class_id);
    getchar();
    printf("\n请输入课程名称：");
    scanf("%s",a.class_name);
    getchar();
    printf("\n请输入课程性质：");
    scanf("%s",a.class_quality);
    getchar();
    printf("\n请输入授课学时：");
    scanf("%d",&a.class_time);
    getchar();
    printf("\n请输入该课学分：");
    scanf("%d",&a.class_score);
    getchar();
    printf("\n请输入课程已选人数：");
    scanf("%d",&a.class_number);
    getchar();
    printf("\n请输入课程人数上限：");
    scanf("%d",&a.class_maxinum);
    getchar();
    printf("\n添加成功！\n");
	printf("\n				添加成功后的课程信息\n");
	printf("--------------------------------------------------------------------------\n");
	printf("课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
    c[lenc]=a;

	FILE *f;
	if((f=fopen("./RELEASE/gyq.txt","a+"))==NULL)
	{
		printf("文件打开失败!\n");
	}
	fprintf(f,"%-8s %-8s  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n","CLS","Cadd",c[lenc].class_id,c[lenc].class_name,c[lenc].class_quality,c[lenc].class_time,c[lenc].class_score,c[lenc].class_number,c[lenc].class_maxinum);
    fclose(f);


	lenc++;
    return 0;
}
