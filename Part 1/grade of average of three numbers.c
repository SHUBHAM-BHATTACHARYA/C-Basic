#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the value of physics");
    scanf("%f",&a);
    printf("enter the value of math");
    scanf("%f",&b);
    printf("enter the value of chemistry");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("average=%f\n",d);
    (d>=90)?printf("GRADE=O"):((d>=80)&&(d<=89))?printf("GRADE=E"):((d>=70)&&(d<=79))?printf("GRADE=A"):((d>=60)&&(d<=69))?printf("GRADE=B"):printf("GRADE=FAIL");
    return 0;
}

