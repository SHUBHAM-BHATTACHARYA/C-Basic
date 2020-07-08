#include<stdio.h>
int sum(int x,int y);
int main()
{
    int a,b,c;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    c=sum(a,b);
    printf ("Sum=%d",c);
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
