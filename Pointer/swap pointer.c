#include<stdio.h>
int main()
{
    int a,b,*c,*d,k;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    c=&a;
    d=&b;
    k=*c;
    c=*d;
    d=k;
    printf("After swapping a=%d b=%d",c,d);
}
