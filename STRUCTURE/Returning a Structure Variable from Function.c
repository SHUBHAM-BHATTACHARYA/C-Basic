#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student);
struct student change(struct student stu);
int main()
{
    struct student stu1={"JOHN",12,87};
    struct student stu2={"MARRY",18,90};
    stu1=change(stu1);
    stu2=change(stu2);
    display(stu1);
    display(stu2);
    return 0;
}
struct student change(struct student stu)
{
    stu.marks=stu.marks+5;
    stu.rollno=stu.rollno-10;
    return stu;
}
void display(struct student stu)
{
    printf("Name=%s\t",stu.name);
    printf("Roll No=%d\t",stu.rollno);
    printf("Marks=%d\t",stu.marks);
    printf("\n");
}

