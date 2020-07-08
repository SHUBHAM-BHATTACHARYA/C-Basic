#include<stdio.h>
int main()
{
    float f,*pf;
    int i,*pi;
    pf=&f;
    pi=&i;
    printf("Enter the floating point NO:");
    scanf("%f",&f);
    *pi=(int)*pf;
    printf("The integer equivalent of %f=%d",*pf,*pi);
}
