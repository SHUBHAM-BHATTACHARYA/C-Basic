#include<stdio.h>
int main()
{
    int a,b,x,y;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    x=a;
    y=b;
    while(x!=y)
    {
        if(x<y)
        x=a+x;
        else
            y=b+y;
    }
    printf("L.C.M=%d",x);
    return 0;
}
