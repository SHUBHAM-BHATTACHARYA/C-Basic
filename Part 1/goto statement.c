#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if (a%2==0)
        goto even;
    even:printf("even\n");
        return 0;
}
