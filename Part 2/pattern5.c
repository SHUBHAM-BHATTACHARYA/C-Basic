#include<stdio.h>
int main()
{
    int i,j,p,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        p=1;
        for(j=1;j<=i;j++)
            printf("%d",p++);
        printf("\n");
    }
    return 0;
}
