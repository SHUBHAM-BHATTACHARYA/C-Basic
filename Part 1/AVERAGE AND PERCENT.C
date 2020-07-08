#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf ("enter the value of PHYSICS");
    scanf ("%f",&a);
    printf ("enter the value of MATH");
    scanf ("%f",&b);
    printf ("enter the value of CHEMISTRY");
    scanf ("%f",&c);
    d=(a+b+c)/3;
    printf ("average=%f\n",d);
    e=d*100;
    printf ("percent=%f",e);
    return 0;
}
