#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main()
{
    struct student stu1={"JOHN",12,87};
    struct student stu2={"MARRY",18,90};
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);
    return 0;
}
void inc_marks(struct student *stuptr)
{
    (stuptr->marks)++;
}
void display(struct student *stuptr)
{
    printf("Name=%s\t",stuptr->name);
    printf("Roll No=%d\t",stuptr->rollno);
    printf("Marks=%d\t",stuptr->marks);
    printf("\n");
}

