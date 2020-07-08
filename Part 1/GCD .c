#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
            b=b-a;
    }
    printf("G.C.D=%d",a);
    return 0;
}

