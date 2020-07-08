#include<stdio.h>
int main()
{
    int n,*pn;
    pn=&n;
    printf("Enter the Number:");
    scanf("%d",pn);
    if(*pn>0)
        printf("%d is Positive",*pn);
    else if (*pn<0)
        printf("%d is Negative",*pn);
        else
            printf("The number is equal to zero");
}


