#include<stdio.h>
#include<conio.h>
typedef struct distance
{
    int kms;
    int mtrs;
}DISTANCE;
DISTANCE d1,d2,d3,d4;
DISTANCE add_distance(DISTANCE,DISTANCE);
DISTANCE subtract_distance();
int main()
{
    int choice;
    printf("1.Read Distances:\n");
    printf("2.Display Distances:\n");
    printf("3.Add two Distance:\n");
    printf("4.Subtract two Distance:\n");
    printf("5.EXIT\n");
    do
    {
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the Kms and Mtrs of the first Distance:");
            scanf("%d %d",&d1.kms,&d1.mtrs);
            printf("\n Enter the Kms and Mtrs of the second Distance:");
            scanf("%d %d",&d2.kms,&d2.mtrs);
            break;
        case 2:
            printf("\n 1st Distance is:%dKms %dMtrs",d1.kms,d1.mtrs);
            printf("\n 2nd Distance is:%dKms %dMtr",d2.kms,d2.mtrs);
            break;
        case 3:
            d3=add_distance(d1,d2);
            printf("\n Sum of two Distance is:%dKms %dMtrs",d3.kms,d3.mtrs);
            break;
        case 4:
            d4=subtract_distance(d1,d2);
            printf("\n The Difference between two Distance is:%dKms %dMtrs",d4.kms,d4.mtrs);
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
DISTANCE add_distance(DISTANCE d1,DISTANCE d2)
{
    DISTANCE sum;
    sum.mtrs=d1.mtrs+d2.mtrs;
    sum.kms=d1.kms+d2.kms;
    while(sum.mtrs>1000)
    {
        sum.mtrs-=1000;
        sum.kms++;
    }
    return sum;
}
DISTANCE subtract_distance(DISTANCE d1,DISTANCE d2)
{
    DISTANCE sub;
    if(d1.kms>d2.kms)
    {
        sub.mtrs=d1.mtrs-d2.mtrs;
        sub.kms=d1.kms-d2.kms;
    }
    else
    {
        sub.mtrs=d2.mtrs-d1.mtrs;
        sub.kms=d2.kms-d1.kms;
    }
    if(sub.mtrs<0)
    {
        sub.kms=sub.kms-1;
        sub.mtrs=sub.mtrs+1000;
    }
    return sub;
}

