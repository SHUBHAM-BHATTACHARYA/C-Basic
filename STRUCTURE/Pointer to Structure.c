#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
int main()
{
    struct student stu={"MARRY",25,68};
    struct student *ptr=&stu;
    printf("Name=%s\t",ptr->name);
    printf("Roll No=%d\t",ptr->rollno);
    printf("Marks=%d\n",ptr->marks);
    return 0;
}
