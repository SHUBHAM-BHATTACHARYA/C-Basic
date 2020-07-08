#include<stdio.h>
int power(int,int);
int main()
{
    int s,x,y,z;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter the value of y");
    scanf("%d",&y);
    printf("Enter the value of z");
    scanf("%d",&z);
    s=power(x,y)+power(y,x)+power(z,x);
    printf("power of %d^%d+%d^%d+%d^%d=",x,y,y,x,z,x);
    printf("%d",s);
}
int power(int y,int z)
{
    if(z==0)
        return 1;
    else
        return (y*power(y,z-1));
}


