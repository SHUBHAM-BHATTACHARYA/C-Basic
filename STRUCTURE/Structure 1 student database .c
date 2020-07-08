#include<stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[100];
        int phno;
        char address[100];
        int age;
        int hsmarks;
    };
    struct student r;
    {
        printf("Enter the Roll No:");
        scanf("%d",&r.rollno);
        printf("Enter the Name:");
        scanf("%s",r.name);
        printf("Enter the PH NO:");
        scanf("%d",&r.phno);
        printf("Enter the Address:");
        scanf("%s",r.address);
        printf("Enter the Age:");
        scanf("%d",&r.age);
        printf("Enter the H.S Marks:");
        scanf("%d",&r.hsmarks);
        printf("Roll No.=%d\t",r.rollno);
        printf("Name=%s\n",r.name);
        printf("Ph NO.=%d\t",r.phno);
        printf("Address=%s\n",r.address);
        printf("Age=%d\t",r.age);
        printf("H.S Marks=%d\n",r.hsmarks);
    }
}

