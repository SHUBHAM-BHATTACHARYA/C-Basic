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
    struct student r[100];
    int n,i,max=-9999;
    printf("Enter the NO of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Roll No:");
        scanf("%d",&r[i].rollno);
        printf("Enter the Name:");
        scanf("%s",&r[i].name);
        printf("Enter the PH NO:");
        scanf("%d",&r[i].phno);
        printf("Enter the Address:");
        scanf("%s",&r[i].address);
        printf("Enter the Age:");
        scanf("%d",&r[i].age);
        printf("Enter the H.S Marks:");
        scanf("%d",&r[i].hsmarks);
    }
    for(i=0;i<n;i++)
    {
        if(r[i].hsmarks>max)
            max=r[i].hsmarks;

        printf("Roll No.=%d\t",r[i].rollno);
        printf("Name=%s\t",r[i].name);
        printf("H.S Marks=%d\n",r[i].hsmarks);
    }
}

