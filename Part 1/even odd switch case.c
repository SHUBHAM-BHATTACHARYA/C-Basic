#include<stdio.h>
int main()
{
    int ch;
    printf("enter the number");
    scanf("%d",&ch);
    switch(ch%2)
    {
        case 0:printf("Even");
        break;
        case 1:printf("odd");
        return 0;
    }
}
