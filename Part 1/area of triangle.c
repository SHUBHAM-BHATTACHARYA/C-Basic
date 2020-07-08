#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,A;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("s=%f\n",s);
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("AREA=%f",A);
    return 0;
}
