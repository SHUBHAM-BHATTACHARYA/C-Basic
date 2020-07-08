#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    char course[20];
    float fees;
};
main()
{
    struct student *ps1;
    struct student s1={32,"SHUBHAM","BTECH",45000};
    ps1=&s1;
    printf("DETAILS OF STUDENT\n");
    printf("Roll No=%d\t",ps1->rollno);
    printf("Name=%s\n",ps1->name);
    printf("Course=%s\t",ps1->course);
    printf("Fees=%f\n",ps1->fees);
    return 0;
}

