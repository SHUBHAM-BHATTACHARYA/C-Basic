#include<stdio.h>
int main()
{
    float a;
    printf("enter the value of a");
    scanf("%f",&a);
    if (a>0)
        printf("%f",a);
    else
        printf("%f",a*-1);
    return 0;
}
