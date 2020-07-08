#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the no. of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(k=i+1;k<=n;k++)
            printf(" ");
        for(k=n;k>i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
