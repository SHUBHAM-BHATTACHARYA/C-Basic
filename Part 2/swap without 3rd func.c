#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("After swapping\n");
    printf("a=%d\n",x);
    printf("b=%d",y);
}

