#include<stdio.h>
void count();
int main()
{
    count();
}
void count()
{
    int n,c=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=c+1;
        n=n/10;
    }
    printf("No. of digit=%d",c);
}
