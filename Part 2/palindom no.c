#include<stdio.h>
int main()
{
    int i,a,b,s=0,n;
    printf("enter the value of a");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
    if(s==n)
        printf("Palindrome No.");
        else
            printf("Not Palindrome No.");
    return 0;
}
