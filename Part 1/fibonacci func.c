#include<stdio.h>
int fibo(int);
int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    i=fibo(n);
    printf("Fibonacci series of %d digit=",n);
    printf("%d",i);
}
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
    return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}

