#include<string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stu1={"Oliver",25,68};
    struct student stu2,stu3;
    strcpy(stu2.name,"John");
    stu2=stu1;
    printf("STUDENT 1 :Name=%s  Roll=%d  Marks=%.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("STUDENT 2 :Name=%s  Roll=%d  Marks=%.2f\n",stu2.name,stu2.rollno,stu2.marks);
}

