#include<stdio.h>
int main()
{
    int i,n,a[100],c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of 1st array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Even No. of 1st array\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
           c++;
    }
        printf("Even No.=%d",c);
    return 0;
}

