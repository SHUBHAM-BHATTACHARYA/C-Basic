#include<stdio.h>
int main()
{
    int ch;
    printf("Enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:printf("Hi");
        break;
        case 2:printf("Hello");
        break;
        case 3:printf("SKFGI");
        break;
        case 4:printf("Mankundu");
        break;
        default :printf("wrong choice");
    }
    return 0;
}
