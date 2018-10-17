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

int CCHUSHI();
int CGET();
int CPUT();
