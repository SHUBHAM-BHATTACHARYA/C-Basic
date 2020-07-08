#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student);
void dec_marks(struct student stuarr[]);
int main()
{
    int i;
    struct student stuarr[3]={
                                 {"MARRY",12,98},
                                 {"JOHN",11,97},
                                 {"TOM",13,89}
                              };
    dec_marks(stuarr);
    for(i=0;i<3;i++)
        display(stuarr[i]);
    return 0;
}
void dec_marks(struct student stuarr[])
{
    int i;
    for(i=0;i<3;i++)
        stuarr[i].marks=stuarr[i].marks-10;
}
void display(struct student stu)
{
    printf("Name=%s\t",stu.name);
    printf("Roll No=%d\t",stu.rollno);
    printf("Marks=%d\t",stu.marks);
    printf("\n");
}


