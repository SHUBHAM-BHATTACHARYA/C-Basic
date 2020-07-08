#include<stdio.h>
int main()
{
    int y;
    printf("Enter the value of year");
    scanf("%d",&y);
    (y%4==0||(y%400==0 && y%100!=0))?printf("leap year"):printf("not leap year");
    return 0;
}
