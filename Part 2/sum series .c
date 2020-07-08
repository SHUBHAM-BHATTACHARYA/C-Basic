#include<stdio.h>
int main()
{
    float i,n,s=0,f=1;
    printf("Enter the NO of terms:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+1/f;
    }
    printf("sum=%f",s);
}
