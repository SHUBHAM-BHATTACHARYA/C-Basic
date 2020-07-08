#include<stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("Enter the NO.");
    scanf("%d",&n);
    if(n<0)
        printf("No factorial of negative NO.");
    else
        printf("Factorial of %d is %1d\n",n,factorial(n));
}
long int factorial(int n)
{
    int i;
    long int fact=1;
    if(n==0)
    return 1;
    for(i=n;i>1;i--)
        fact*=i;
    return fact;

}
