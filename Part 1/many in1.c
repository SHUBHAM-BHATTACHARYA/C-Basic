#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("press 1 for even or odd\n");
    printf("press 2 for positive or negative\n");
    printf("press 3 for absolute value\n");
    printf("enter your choice\n");
    scanf("%d",&b);
    switch(b)
    {
        case 1:if(a%2==0)
        printf ("even");
        else
            printf("odd");
        break;
        case 2:if(a>0)
        printf("positive");
        else
            printf("negative");
        break;
        case 3:if(a<0)
        printf("%d",-1*a);
        else
            printf("%d",a);
        break;
        default :printf("wrong condition");
    }
    return 0;
}
