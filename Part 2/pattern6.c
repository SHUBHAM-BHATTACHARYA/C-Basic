
#include<stdio.h>
int main()
{
    int i,j,p,n;
    printf("Enter the no. of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
            p=1;
        for(j=1;j<=i;j++)
            printf("%d",p++);
            p=p;
        for(j=1;j<i;j++)
            printf("%d",p++);
        printf("\n");
    }
    return 0;
}
