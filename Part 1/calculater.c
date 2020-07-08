#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("press 1 for addition\n");
    printf("press 2 for subtractions\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:printf("a+b");
        break;
        case 2:printf("a-b");
        break;
        case 3:printf("a*b");
        break;
        case 4:printf("a/b");
        break;
        default :printf("wrong condition");
    }
    return 0;
}
