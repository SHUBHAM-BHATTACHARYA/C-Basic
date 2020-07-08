#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student);
int main()
{
    struct student stu1={"JOHN",12,87};
    struct student stu2;
    strcpy(stu2.name,"MARRY");
    stu2.rollno=18;
    stu2.marks=90;
    display(stu1);
    display(stu2);
    return 0;
}
void display(struct student stu)
{
    printf("Name=%s\t",stu.name);
    printf("Roll No=%d\t",stu.rollno);
    printf("Marks=%d\t",stu.marks);
    printf("\n");
}
