#include<stdio.h>
int main()
{
    int i,n,m;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of m");
    scanf("%d",&m);
    if(n%2==0)
    {
        for(i=n;i<=m;i=i++)
        printf("%d\n",i);
    }
    return 0;
}
