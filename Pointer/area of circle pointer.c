#include<stdio.h>
int main()
{
    float r,a=0.0,*pr,*pa;
    pr=&r;
    pa=&a;
    printf("Enter the Radius of Circle:");
    scanf("%1f",pr);
    *pa=3.14*(*pr)*(*pr);
    printf("The Area of the Circle with Radius %1f=%1f",*pr,*pa);
}
