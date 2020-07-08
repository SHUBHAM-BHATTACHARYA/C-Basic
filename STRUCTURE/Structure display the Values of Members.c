#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stu1={"Marry",25,68};
    struct student stu2,stu3;
    strcpy(stu2.name,"John");
    stu2.rollno=26;
    stu2.marks=98;
    printf("Enter Name,Roll No, and Marks for STUDENT 3:");
    scanf("%s %d %f",&stu3.name,&stu3.rollno,&stu3.marks);
    printf("STUDENT 1 :Name=%s  Roll=%d  Marks=%.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("STUDENT 2 :Name=%s  Roll=%d  Marks=%.2f\n",stu2.name,stu2.rollno,stu2.marks);
    printf("STUDENT 3 :Name=%s  Roll=%d  Marks=%.2f\n",stu3.name,stu3.rollno,stu3.marks);
}
