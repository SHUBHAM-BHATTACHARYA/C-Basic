#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int leapyear(struct date d);
int main()
{
    struct date d;
    printf("Enter the Date:\n");
    scanf("%d %d %d",&d.day,&d.month,&d.year);
    if(leapyear(d)==0)
        printf("%d is not Leap Year",d.year);
    else
        printf("%d is a Leap Year",d.year);
}
int leapyear(struct date d)
{
    if((d.year%4==0 && d.year%100!=0)||d.year%400==0)
        return 1;
    else
        return 0;
}
