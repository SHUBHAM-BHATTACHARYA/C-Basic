#include<stdio.h>
int sum(int);
int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    i=sum(n);
    printf("Sum upto %d element=\n",n);
    printf("%d",i);
}
int sum(int x)
{
    if(x==0)
        return 0;
    else
        return (x+sum(x-1));
}

