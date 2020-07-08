#include<stdio.h>
#include<conio.h>
typedef struct
{
    int ft;
    int inch;
}HEIGHT;
HEIGHT h1,h2,h3,h4;
HEIGHT add_height(HEIGHT,HEIGHT);
HEIGHT subtract_height(HEIGHT,HEIGHT);
int main()
{
    int choice;
    printf("1.Read Height:\n");
    printf("2.Display Height:\n");
    printf("3.Add two Height:\n");
    printf("4.Subtract two Height:\n");
    printf("5.EXIT\n");
    do
    {
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the Feet and Inches of the first Height:");
            scanf("%d %d",&h1.ft,&h1.inch);
            printf("\n Enter the Feet and Inches of the second Height:");
            scanf("%d %d",&h2.ft,&h2.inch);
            break;
        case 2:
            printf("\n 1st Height is:%dft %dinch",h1.ft,h1.inch);
            printf("\n 2nd Height is:%dft %dinch",h2.ft,h2.inch);
            break;
        case 3:
            h3=add_height(h1,h2);
            printf("\n Sum of two Height is:%dft %dinch",h3.ft,h3.inch);
            break;
        case 4:
            h4=subtract_height(h1,h2);
            printf("\n The Difference between two Height is:%dft %dinch",h4.ft,h4.inch);
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
HEIGHT add_height(HEIGHT h1,HEIGHT h2)
{
    HEIGHT sum;
    sum.inch=h1.inch+h2.inch;
    sum.ft=h1.ft+h2.ft;
    while(sum.inch>12)
    {
        sum.inch-=12;
        sum.ft++;
    }
    return sum;
}
HEIGHT subtract_height(HEIGHT h1,HEIGHT h2)
{
    HEIGHT sub;
    if(h1.ft>h2.ft)
    {
        if(h1.inch<h2.inch)
        {
            h1.inch+=12;
            h1.ft--;
        }
        sub.inch=h1.inch-h2.inch;
        sub.ft=h1.ft-h2.ft;
    }
    else
    {
        if(h1.inch>h2.inch)
        {
            h2.inch+=12;
            h2.ft--;
        }
        sub.inch=h2.inch-h1.inch;
        sub.ft=h2.ft-h1.ft;
    }
    return sub;
}
