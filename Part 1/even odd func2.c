#include<stdio.h>
int find(int n);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even\n",n);
    else
        printf("%d is Odd\n",n);
}
int find(int n)
{
    if(n%2==0)
        return 0;
    else
        return 1;
}

