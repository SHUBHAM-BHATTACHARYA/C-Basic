#include<stdio.h>
int main()
{
    struct student
    {
        char name[100];
        char depart[100];
        char course[100];
        int yearadmin;
    };
    struct student r[100];
    int n,i,temp;
    printf("Enter the NO of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Name:");
        scanf("%s",r[i].name);
        printf("Enter the Department:");
        scanf("%s",r[i].depart);
        printf("Enter the course:");
        scanf("%s",r[i].course);
        printf("Enter the Year Of Admission:");
        scanf("%d",&r[i].yearadmin);
    }
    printf("Enter the Year:");
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        if(r[i].yearadmin==temp)
        {
        printf("NAME=%s\t",r[i].name);
        printf("Department=%s\n",r[i].depart);
        }
    }
}

