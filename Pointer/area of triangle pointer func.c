#include<stdio.h>
void read(float *b,float *h);
void area(float *b,float *h,float *a);
int main()
{
    float b,h,a;
    read(&b,&h);
    area(&b,&h,&a);
    printf("Area of Triangle with base %f and height %f=%f",b,h,a);
}
void read(float *b,float *h)
{
    printf("Enter the Base:");
    scanf("%f",b);
    printf("Enter the Height:");
    scanf("%f",h);
}
void area(float *b,float *h,float *a)
{
    *a=0.5*(*b)*(*h);
}
