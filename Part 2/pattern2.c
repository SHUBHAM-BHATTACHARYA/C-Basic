#include<stdio.h>
int main()
{
    int i,j,p,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        p=1;
        for(j=1;j<=i;j++)
            printf("%d",p++);
        p=p-2;
        for(j=1;j<i;j++)
            printf("%d",p--);
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        p=1;
        for(j=1;j<=n-i;j++)
            printf("%d",p++);
        p=p-2;
        for(j=1;j<n-i;j++)
            printf("%d",p--);
        printf("\n");
    }
    return 0;
}

