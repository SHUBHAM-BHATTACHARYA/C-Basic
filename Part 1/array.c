#include<stdio.h>
int main()
{
    int i,n,a[100],s=0,c=0;
    printf("enter the Decimal No.");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        s=s+a[i]*pow(2,n-i-1);
        i++;
        c++;
        n=n/2;
    }
    printf("Binary No.=");
    for(i=c-1;i>=0;i--)
        printf("%d",a[i]);
    return 0;
}
