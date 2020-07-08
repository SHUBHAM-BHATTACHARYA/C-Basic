#include<stdio.h>
int main()
{
    int i,n,a[100],c=0,s;
    printf("enter the Decimal No.");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        a[i]=n%2;
        s=s+(a[i]*pow(2,n-i-1));
        i++;
        c++;
        n=n/2;
    }
    printf("Binary No.=");
    for(i=c-1;i>=0;i--)
        printf("%d",a[i]);
    return 0;
}

