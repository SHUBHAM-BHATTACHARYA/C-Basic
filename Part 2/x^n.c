#include<stdio.h>
int main()
{
    float i,x,n,s=1;
    printf("enter the value of x");
    scanf("%f",&x);
    printf("enter the value of n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        s=s*x;
    }
    printf("x^n=%f\n",s);
    return 0;
}
