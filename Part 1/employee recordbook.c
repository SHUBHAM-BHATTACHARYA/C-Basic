#include<stdio.h>
int main()
{
    struct employee
    {
        char name[100];
        int id;
        float salary;
        char desig[100];
    };
    struct employee e[100];
    int n,i,temp,f=0;
    printf("Enter the NO of employee:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Name:");
        scanf("%s",e[i].name);
        printf("Enter the ID NO:");
        scanf("%d",&e[i].id);
        printf("Enter the Salary:");
        scanf("%f",&e[i].salary);
        printf("Enter the Designation:");
        scanf("%s",e[i].desig);
    }
    printf("Enter the ID to get Salary:");
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        if(e[i].id==temp)
        {
            f=1;
            printf("SALARY=%f",e[i].salary);
            break;
        }
    }
    if(f==0)
       printf("ID not Found");
}

