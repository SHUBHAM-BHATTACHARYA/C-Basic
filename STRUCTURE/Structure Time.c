#include<stdio.h>
#include<conio.h>
typedef struct
{
    int hr;
    int min;
    int sec;
}TIME;
TIME t1,t2,t3,t4;
TIME subtract_time(TIME,TIME);
TIME add_time(TIME,TIME);
int main()
{
    int choice;
    printf("1.Read Time:\n");
    printf("2.Display Time:\n");
    printf("3.Add two Time:\n");
    printf("4.Subtract two Time:\n");
    printf("5.EXIT\n");
    do
    {
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the hrs,mins,and secs of the first time:");
            scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
            printf("\n Enter the hrs,mins and secs of the second time:");
            scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
            break;
        case 2:
            printf("\n 1st Time is:%dhr %dmin %dsec",t1.hr,t1.min,t1.sec);
            printf("\n 2nd Time is:%dhr %dmin %dsec",t2.hr,t2.min,t2.sec);
            break;
        case 3:
            t3=add_time(t1,t2);
            printf("\n Sum of two Time is:%dhr %dmin %dsec",t3.hr,t3.min,t3.sec);
            break;
        case 4:
            t4=subtract_time(t1,t2);
            printf("\n The Difference between two Time is:%dhr %dmin %dsec",t4.hr,t4.min,t4.sec);
            break;
        case 5:
            printf("\n EXIT");
            break;
        default:
            printf("\n Wrong Choice\n");
            break;
        }
    }
    while(choice!=5);
}
TIME add_time(TIME t1,TIME t2)
{
    TIME sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min;
    sum.hr=t1.hr+t2.hr;
    while(sum.sec>60)
    {
        sum.sec-=60;
        sum.min++;
    }
    while(sum.min>60)
    {
        sum.min-=60;
        sum.hr++;
    }
    return sum;
}
TIME subtract_time(TIME t1,TIME t2)
{
    TIME sub;
    if(t1.hr>t2.hr)
    {
        if(t1.sec<t2.sec)
        {
            t1.sec+=60;
            t1.min--;
        }
        sub.sec=t1.sec-t2.sec;
        if(t1.min<t2.min)
        {
            t1.min+=60;
            t1.hr--;
        }
        sub.min=t1.min-t2.min;
        sub.hr=t1.hr-t2.hr;
    }
    else
    {
        if(t2.sec<t1.sec)
        {
            t2.sec+=60;
            t2.min--;
        }
        sub.sec=t2.sec-t1.sec;
        if(t2.min<t1.min)
        {
            t2.min+=60;
            t2.hr--;
        }
        sub.min=t2.min-t1.min;
        sub.hr=t2.hr-t1.hr;
    }
    return sub;
}
