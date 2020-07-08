#include<stdio.h>
int find(int n);
int main()
{
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    find(n);
}
int find(int n)
{
    if(n%2==0)
        printf("%d is Even\n",n);
    else
        printf("%d is Odd\n",n);
}
