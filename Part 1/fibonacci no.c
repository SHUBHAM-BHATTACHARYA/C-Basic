#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of n");
    scanf("%d",&n);
    printf("a=%d\nb=%d\n",a,b);
    c=a+b;
    for( ;c<=n; )
    {
        printf("c=%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    printf("c=%d\n",c);
    return 0;
}
