#include<stdio.h>
int main()
{
    int i,n,s=0,sign=1;
    printf("enter the value of n");
    scanf("%d",&n);
    i=1;
    do
    {
        s=s+(i*i)*sign;
        sign=sign*(-1);
        i++;
    }
    while(i<=n);
    printf("sum=%d",s);
    return 0;
}

