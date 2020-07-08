#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of 1st array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the value of 2nd array\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        printf("swap of two array\n");
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    for(i=0;i<n;i++)
        printf("%d\n",b[i]);
    return 0;
}

