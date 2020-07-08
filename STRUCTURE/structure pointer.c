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
    struct student s1,s2,*ps1,*ps2;
    ps1=&s1;
    ps2=&s2;
    ps1->rollno=32;
    strcpy(ps1->name,"SHUBHAM");
    strcpy(ps1->course,"B.Tech");
    ps1->fees=400000;
    printf("Enter the details of the 2nd student\n");
    printf("Enter the Roll No:");
    scanf("%d",&ps2->rollno);
    printf("Enter the Name:");
    scanf("%s",ps2->name);
    printf("Enter the Course:");
    scanf("%s",ps2->course);
    printf("Enter the fees:");
    scanf("%f",&ps2->fees);
    printf("DETAILS OF 1ST STUDENT\n");
    printf("Roll No=%d\t",ps1->rollno);
    printf("Name=%s\n",ps1->name);
    printf("Course=%s\t",ps1->course);
    printf("Fees=%f\n",ps1->fees);
    printf("DETAILS OF 2ND STUDENT\n");
    printf("Roll No=%d\t",ps2->rollno);
    printf("Name=%s\n",ps2->name);
    printf("Course=%s\t",ps2->course);
    printf("Fees=%f\n",ps2->fees);
    return 0;
}
