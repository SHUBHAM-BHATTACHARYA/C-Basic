#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,p,c;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the value of r");
    scanf("%d",&r);
    p=fact(n)/fact(n-r);
    c=fact(n)/fact (r)*fact(n-r);
    printf("nPr=%d\n",p);
    printf("nCr=%d\n",c);
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
