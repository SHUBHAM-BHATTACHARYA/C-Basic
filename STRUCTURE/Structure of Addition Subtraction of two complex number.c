#include<stdio.h>
#include<conio.h>
int main()
{
    typedef struct complex
    {
        int real;
        int img;
    }COMPLEX;
    COMPLEX c1,c2,sum_c,sub_c;
    int choice;
    printf("1.Read Complex Numbers:\n");
    printf("2.Display the Complex Numbers:\n");
    printf("3.Add the Complex Numbers:\n");
    printf("4.Subtract the Complex Numbers:\n");
    printf("5.EXIT\n");
    do
    {
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the Real and Imaginary Part of the 1st Complex Number:");
            scanf("%d %d",&c1.real,&c1.img);
            printf("\n Enter the Real and Imaginary Part of the 2nd Complex Number:");
            scanf("%d %d",&c2.real,&c2.img);
            break;
        case 2:
            printf("\n 1st Complex Number is:%d+%di",c1.real,c1.img);
            printf("\n 2nd Complex Number is:%d+%di",c2.real,c2.img);
            break;
        case 3:
            sum_c.real=c1.real+c2.real;
            sum_c.img=c1.img+c2.img;
            printf("\n Sum of two Complex Number is:%d+%di",sum_c.real,sum_c.img);
            break;
        case 4:
            sub_c.real=c1.real-c2.real;
            sub_c.img=c1.img-c2.img;
            printf("\n The Difference between two complex number is:%d+%di",sub_c.real,sub_c.img);
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
