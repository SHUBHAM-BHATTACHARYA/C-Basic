#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    char course[20];
    float fees;
};
int main()
{
    int i,n;
    struct student *p;
    printf("Enter the NO of students:");
    scanf("%d",&n);
    p=(struct student*)malloc(n*sizeof(struct student));
    if(p==NULL)
    {
        printf("\n Memory Allocation Failed");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("\n Enter the details of the %dth student:",i);
        printf("\n Enter the Roll Number:");
        scanf("%d",&p[i]->roll);
        printf("\n Enter the Name:");
        scanf("%s",p[i]->name);
        printf("\n Enter the Course:");
        scanf("%s",p[i]->course);
        printf("\n Enter the Fees:");
        scanf("%f",&p[i]->fees);
    }
    for(i=0;i<n;i++)
    {
       printf("\n Enter the details of the %dth student:",i);
       printf("\n Roll Number=%d",p[i]->roll);
       printf("\n Name=%s",p[i]->name);
       printf("\n Course=%s",p[i]->course);
       printf("\n Fees=%f",p[i]->fees);
    }
}
