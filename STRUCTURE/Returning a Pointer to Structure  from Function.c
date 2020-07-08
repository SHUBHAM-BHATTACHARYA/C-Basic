#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student *);
struct student *func(struct student *p1,struct student *p2);
int main()
{
    struct student *stuptr;
    struct student stu1={"JOHN",12,87};
    struct student stu2={"MARRY",18,90};
    stuptr=func(&stu1,&stu2);
    display(stuptr);
    return 0;
}
struct student *func(struct student *p1,struct student *p2)
{
    if(p1->marks > p2->marks)
        return p1;
    else
        return p2;
}
void display(struct student *stuptr)
{
    printf("Name=%s\t",stuptr->name);
    printf("Roll No=%d\t",stuptr->rollno);
    printf("Marks=%d\t",stuptr->marks);
}


