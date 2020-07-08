#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],c[100];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of 1st array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the value of 2nd array\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        printf("sum of two array\n");
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
    for(i=0;i<n;i++)
        printf("%d\n",c[i]);
    return 0;
}
