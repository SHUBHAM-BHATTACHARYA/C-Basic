#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    char course[20];
    float fees;
};
void display(struct student*);
main()
{
    struct student s1,*ps1;
    ps1=&s1;
    printf("Enter the Roll No:");
    scanf("%d",&ps1->rollno);
    printf("Enter the Name:");
    scanf("%s",ps1->name);
    printf("Enter the Course:");
    scanf("%s",ps1->course);
    printf("Enter the fees:");
    scanf("%f",&ps1->fees);
    display(ps1);
    return 0;
}
void display(struct student *ps1)
{
    printf("DETAILS OF STUDENT\n");
    printf("Roll No=%d\t",ps1->rollno);
    printf("Name=%s\n",ps1->name);
    printf("Course=%s\t",ps1->course);
    printf("Fees=%f\n",ps1->fees);

}

