#include<stdio.h>
int main()
{
    int i,b,a,f=1,s=0,n;
    printf("enter the value of a");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        b=a%10;
        for(i=1;i<=b;i++)
        f=f*i;
        a=a/10;
        s=s+f;
    }
    if(s==n)
        printf("Krishnomurti No.");
        else
            printf("Not Krishnomurti No.");
    return 0;
}

