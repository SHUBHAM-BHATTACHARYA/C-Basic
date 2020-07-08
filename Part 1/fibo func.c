#include<stdio.h>
int fibo(int n);
int main()
{
    int i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series=");
    for(i=0;i<n;i++)
        printf("%d",fibo(i));
    printf("\n");
}
int fibo(int n)
{
    if(n==0||n==1)
        return (1);
    else
        return(fibo(n-1)+fibo(n-2));
}
