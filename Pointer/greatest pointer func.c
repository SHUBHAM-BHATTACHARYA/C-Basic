#include<stdio.h>
void larger(int *a,int *b,int *c,int *large);
int main()
{
    int a,b,c,large;
    printf("Enter the 1st NO:");
    scanf("%d",&a);
    printf("Enter the 2nd NO:");
    scanf("%d",&b);
    printf("Enter the 3rd No:");
    scanf("%d",&c);
    larger(&a,&b,&c,&large);
}
void larger(int *a,int *b,int *c,int*large)
{
    if(*a>*b&&*a>*c)
        *large=*a;
    if(*b>*a&&*b>*c)
        *large=*b;
    else
        *large=*c;
    printf("Largest NO=%d",*large);
}

