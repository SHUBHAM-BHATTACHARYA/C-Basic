#include<stdio.h>
int main()
{
    struct DOB
    {
        int day;
        int month;
        int year;
    };
    struct student
    {
        int rollno;
        char name[100];
        float fees;
        struct DOB date;
    };
    struct student r;
    {
        printf("Enter the Roll No:");
        scanf("%d",&r.rollno);
        printf("Enter the Name:");
        scanf("%s",r.name);
        printf("Enter the Fees:");
        scanf("%f",&r.fees);
        printf("Enter the DOB:\n");
        scanf("%d %d %d",&r.date.day,&r.date.month,&r.date.year);
        printf("Roll No.=%d\t",r.rollno);
        printf("Name=%s\n",r.name);
        printf("Fees=%f\t",r.fees);
        printf("DOB=%d %d %d\n",r.date.day,r.date.month,r.date.year);
    }
}


