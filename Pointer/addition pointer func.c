#include<stdio.h>
void sum(int *a,int *b,int *c);
int main()
{
    int a,b,c;
    printf("Enter the 1st NO:");
    scanf("%d",&a);
    printf("Enter the 2nd NO:");
    scanf("%d",&b);
    sum(&a,&b,&c);
    printf("Total=%d",c);
}
void sum(int *a,int *b,int *c)
{
    *c=*a+*b;
}
