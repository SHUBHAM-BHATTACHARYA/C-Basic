#include<stdio.h>
int power(int,int);
int main()
{
    int i,n,x;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter the value of n");
    scanf("%d",&n);
    i=power(x,n);
    printf("power of %d^%d=",x,n);
    printf("%d",i);
}
int power(int y,int z)
{
    if(z==0)
        return 1;
    else
        return (y*power(y,z-1));
}

