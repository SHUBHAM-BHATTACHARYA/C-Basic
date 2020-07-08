#include<stdio.h>
int m,n;
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("HCF of %d and %d is %d\n",x,y,hcf(x,y));
    m=x;n=y;
    printf("LCM 0f %d and %d is %d\n",x,y,lcm(x,y));
}
int hcf(int a,int b)
{
    if(a==b)
        return(b);
    else if(a<b)
        hcf(a,b-a);
    else
        hcf(a-b,b);
}
int lcm(int a,int b)
{
    if(a==b)
        return b;
    else if(a<b)
        lcm(a+m,b);
    else
        lcm(a,b+n);
}
