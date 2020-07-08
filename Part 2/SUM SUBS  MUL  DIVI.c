#include<stdio.h>
int main()
{
    float a,b;
    float c,d,e,f,g;
    printf ("enter the value of a");
    scanf ("%f",&a);
    printf ("enter the value of b");
    scanf ("%f",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=(a/b)*100;
    printf("sum=%f\nsubs=%f\nmul=%f\ndiv=%f\npercent=%f\n",c,d,e,f,g);
    return 0;
    }
