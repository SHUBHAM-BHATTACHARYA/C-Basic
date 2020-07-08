#include<stdio.h>
int main()
{
    int a,s,sum=0;
    printf("enter the value of a");
    scanf("%d",&a);
    while(a>0)
    {
        s=a%10;
        sum=sum+s;
        a=a/10;
    }
    printf("sum=%d",sum);
    return 0;
}
