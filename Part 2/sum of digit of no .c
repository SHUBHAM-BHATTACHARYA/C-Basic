#include<stdio.h>
int sum(int);
int main()
{
    int i,n;
    printf("Enter the NO.");
    scanf("%d",&n);
    i=sum(n);
    printf("Sum of digit of %d=",n);
    printf("%d",i);
}
int sum(int z)
{
    int r;
    if(z==0)
        return 0;
    else
    {
        r=z%10;
        return (r+sum(z/10));
    }
}

