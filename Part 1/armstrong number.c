#include<stdio.h>
int main()
{
    int a,r,s=0,n;
    printf("enter the value of a");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        r=a%10;
        s=s+r*r*r;
        a=a/10;
    }
    if(n==s)
    printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
