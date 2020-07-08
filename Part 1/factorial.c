#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("Enter the No:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("Factorial=%d",s);
    return 0;
}
