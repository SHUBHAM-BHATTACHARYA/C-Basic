#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        r=n%i;
        if(r==0)
            s=s+i;
    }
    if(s==n)
        printf("Perfect No.");
        else
            printf("Not Perfect");
    return 0;
}
