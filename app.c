#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"mA.h"
//#include"mB.h"

typedef struct studentinformation
{
    char stu_id[10];
    char stu_name[10];
    char stu_class[3][10];
    int sum;
}stu;
typedef struct classinformation
{
    char class_id[10];
    char class_name[10];
    char class_quality[10];
    int class_time;
    int class_score;
    int class_number;
    int class_maxinum;
}cls;

stu s[10];
cls c[10];

int lens;
int lenc;


int windows();
int student();
int class();

int student_daoru();  
int class_daoru();

int Shandput();
int Sfileput();

int Chandput();
int Cfileput();



int windows()
{
	while(1)
	{
		printf("你本次登陆时间为:\n");
		system("date");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("\n								  欢 迎 进 入 学 生 管 理 系 统\n");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("按2继续，按3退出:");
		int num;
		printf("\n请给我一个数字:");
		scanf("%d",&num);
		getchar();
		if(num==2)
		{
			printf("			输入你的通行证\n");
			char name[10];
			while(1)
			{
				scanf("%s",name); 
				getchar();
				if(strcmp(name,"gyq")==0)
				{
					while(1)
					{					
						printf("你本次登陆时间为:\n");
						system("date");
						printf("\n							————————————————————————————————————————————————————\n\n");	
						printf("\n									  1.学 生 信 息 \n\n");
						printf("\n									  2.课 程 信 息 \n\n");
						printf("\n									  3.退 出 \n\n");
						printf("\n							————————————————————————————————————————————————————\n\n");
						printf("\n请给我一个数字,按1学生信息继续，按2课程信息，按3退出:");
						int num1; 
						scanf("%d",&num1); 
						getchar();
						if(num1==1)
						{
							student_daoru();
							student();
						}
						else if(num1==2)
						{
							class_daoru();
							class();
						}
						else if(num1==3)
						{
							break;
						}
						else
						{
							printf("【输入错误】\n"); 
							continue;
						}
					}
					break;
				}
				printf("输入错误，再次输入:");
			}
		}
		else if(num==3)
		{
			return 0;
		}
		else
		{
			printf("【输入错误，重新输入按2继续，按3退出】\n");
			continue;
		}
	}	
}


int student_daoru()
{
	printf("\n							   导 入 文 件\n");
	printf("\n							——————————————————\n");
	printf("\n							1.手  动  导  入\n");
	printf("\n							2.文  件  导  入\n");
	printf("\n请给我一个数字:");
	int n1;
	scanf("%d",&n1);
	getchar();
	if(n1==1)
	{
		Shandput();
	}
	if(n1==2)
	{
		Sfileput();
	}
	return 0;
	
}

int class_daoru()
{
	printf("\n							   导 入 文 件\n");
	printf("\n							——————————————————\n");
	printf("\n							1.手  动  导  入\n");
	printf("\n							2.文  件  导  入\n");
	printf("\n请给我一个数字:");
	int n1;
	scanf("%d",&n1);
	getchar();
	if(n1==1)
	{
		Chandput();
	}
	if(n1==2)
	{
		Cfileput();
	}
	return 0;
}

int Shandput()
{
    int i;
    FILE *fp;
	fp=fopen("./RELEASE/student.txt","w"); 
    printf("\n请输入要输入的学生信息个数：");
    scanf("%d",&lens);
    for(i=0;i<lens;i++)
    {
        scanf("%s %s %s %s %s %d",s[i].stu_id,s[i].stu_name,s[i].stu_class[0],s[i].stu_class[1],s[i].stu_class[2],&s[i].sum);
    }
    printf("学号    学生姓名    选课1    选课2    选课3    总学分\n");
    for(i=0;i<lens;i++)
    {
        printf("%-4s %8s\t    %-8s %-8s %-8s %4d\n",s[i].stu_id,s[i].stu_name,s[i].stu_class[0],s[i].stu_class[1],s[i].stu_class[2],s[i].sum);
        fprintf(fp,"%s %s %s %s %s %d\n",s[i].stu_id,s[i].stu_name,s[i].stu_class[0],s[i].stu_class[1],s[i].stu_class[2],s[i].sum);
    }
    printf("导入成功！\n");
	fclose(fp);
	return 0;
}

int Sfileput()
{
	FILE *fp;
    int i=0,j;
    if((fp=fopen("./RELEASE/student.txt","r"))==NULL)
    {
        printf("导入失败！\n");
        return 0;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s %s %s %s %s %d",s[i].stu_id,s[i].stu_name,s[i].stu_class[0],s[i].stu_class[1],s[i].stu_class[2],&s[i].sum);
        i++;
    }
    lens=i-1;
    printf("学号    学生姓名    选课1    选课2    选课3    总学分\n");
    for(j=0;j<i-1;j++)
    {
        printf("%-4s %8s\t    %-8s %-8s %-8s %4d\n",s[j].stu_id,s[j].stu_name,s[j].stu_class[0],s[j].stu_class[1],s[j].stu_class[2],s[j].sum);
    }
    printf("导入成功！\n");
    fclose(fp);
    return 0;
}

int Chandput()
{
	int i;
	FILE *fp;
    fp=fopen("./RELEASE/class.txt","w");
    printf("\n请输入要输入的课程信息个数：");
    scanf("%d",&lenc);
    for(i=0;i<lenc;i++)
    {
        scanf("%s %s %s %d %d %d %d",c[i].class_id,c[i].class_name,c[i].class_quality,&c[i].class_time,&c[i].class_score,&c[i].class_number,&c[i].class_maxinum);
    }
    printf("课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
    for(i=0;i<lenc;i++)
    {
        printf("  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[i].class_id,c[i].class_name,c[i].class_quality,c[i].class_time,c[i].class_score,c[i].class_number,c[i].class_maxinum);
        fprintf(fp,"%s %s %s %d %d %d %d\n",c[i].class_id,c[i].class_name,c[i].class_quality,c[i].class_time,c[i].class_score,c[i].class_number,c[i].class_maxinum);
    }
    printf("导入成功！\n");
	fclose(fp);
	return 0;
}

int Cfileput()
{
	FILE *fp;
    int i=0,j;
    if((fp=fopen("./RELEASE/class.txt","r"))==NULL)
    {
        printf("导入失败！\n");
        return 0;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s %s %s %d %d %d %d",c[i].class_id,c[i].class_name,c[i].class_quality,&c[i].class_time,&c[i].class_score,&c[i].class_number,&c[i].class_maxinum);
        i++;
    }
    lenc=i-1;
    printf("课程编号  课程名称  课程性质  授课学时  学分  课程已选人数 课程人数上限\n");
    for(j=0;j<i-1;j++)
    {
        printf("  %s\t   %-10s  %s\t %d\t %d\t %d\t \t%d\n",c[j].class_id,c[j].class_name,c[j].class_quality,c[j].class_time,c[j].class_score,c[j].class_number,c[j].class_maxinum);
    }
    printf("导入成功！\n");
    fclose(fp);
    return 0;
}



int student()
{
	while(1)
	{
		printf("\n									    学 生 信 息 \n\n");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("\n									  1.查 询 学 生 信 息 \n\n");
		printf("\n									  2.增 加 学 生 信 息 \n\n");
		printf("\n									  3.删 除 学 生 信 息 \n\n");
		printf("\n									  4.修 改 学 生 信 息 \n\n");
		printf("\n									  5.退 出 \n\n");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("请输入1~5:");
		int num;
		scanf("%d",&num);
		if(num == 1)
		{
			SCHUSHI();
			SGET();
			Ssearch();
		}
		else if(num == 2)
		{
			SCHUSHI();
			SGET();
			Sadd();
			SPUT();
		}
		else if(num == 3)
		{
			SCHUSHI();
			SGET();
			Sdelate();
			SPUT();
		}
		else if(num == 4)
		{
			SCHUSHI();
			SGET();
			Schange();
		}
		else if(num == 5)
		{
			return 0;
		}
		else
		{
			printf("【输入错误】\n");
			continue;
		}
	}


}


int class()
{
	while(1)
	{
		printf("\n									    课 程 信 息 \n\n");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("\n									  1.查 询 课 程 信 息 \n\n");
		printf("\n									  2.增 加 课 程 信 息 \n\n");
		printf("\n									  3.删 除 课 程 信 息 \n\n");
		printf("\n									  4.修 改 课 程 信 息 \n\n");
		printf("\n									  5.退 出 \n\n");
		printf("\n							————————————————————————————————————————————————————\n\n");
		printf("请输入1~5:");
		int num;
		scanf("%d",&num);
		if(num == 1)
		{
			CCHUSHI();
			CGET();
			Csearch();
		}
		else if(num == 2)
		{
			CCHUSHI();
			CGET();
			Cadd();
			CPUT();
		}
		else if(num == 3)
		{
			CCHUSHI();
			CGET();
			Cdelate();
			CPUT();
		}
		else if(num == 4)
		{
			CCHUSHI();
			CGET();
			Cchange();
		}
		else if(num == 5)
		{
			return 0;
		}
		else
		{
			printf("【输入错误】\n");
			continue;
		}
	}
}


int main()
{
	windows();
}


