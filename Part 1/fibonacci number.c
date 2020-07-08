#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of n");
    scanf("%d",&n);
    printf("a=%d\nb=%d\n",a,b);
    for(i=3;i<=n;i++)
    {
        c=(a+b);
        a=b;
        b=c;
    }
    printf("c=%d\n",c);
    return 0;
}
