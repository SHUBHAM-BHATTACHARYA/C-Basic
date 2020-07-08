#include<stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[100];
        int age;
        int hsmarks;
    };
    struct student r[100];
    int n,i,roll,newroll,newage,newmarks;
    char newname[100];
    printf("Enter the NO of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Roll No:");
        scanf("%d",&r[i].rollno);
        printf("Enter the Name:");
        scanf("%s",r[i].name);
        printf("Enter the Age:");
        scanf("%d",&r[i].age);
        printf("Enter the H.S Marks:");
        scanf("%d",&r[i].hsmarks);
    }
    for(i=0;i<n;i++)
    {
        printf("DETAILS OF %d th STUDENT\n",i+1);
        printf("Roll No.=%d\t",r[i].rollno);
        printf("Name=%s\n",r[i].name);
        printf("Age=%d\t",r[i].age);
        printf("H.S Marks=%d\n",r[i].hsmarks);
    }
    printf("Enter the i'th Student whose record has to be Edited:");
    scanf("%d",&i);
     printf("Enter the New Roll No:");
        scanf("%d",&newroll);
        printf("Enter the Name:");
        scanf("%s",newname);
        printf("Enter the Age:");
        scanf("%d",&newage);
        printf("Enter the H.S Marks:");
        scanf("%d",&newmarks);
        r[i-1].rollno=newroll;
        strcpy(r[i-1].name,newname);
        r[i-1].age=newage;
        r[i-1].hsmarks=newmarks;
        for(i=0;i<n;i++)
       {
        printf("DETAILS OF %d th STUDENT\n",i+1);
        printf("Roll No.=%d\t",r[i].rollno);
        printf("Name=%s\n",r[i].name);
        printf("Age=%d\t",r[i].age);
        printf("H.S Marks=%d\n",r[i].hsmarks);
        }
}

