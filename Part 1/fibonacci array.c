#include<stdio.h>
int main()
{
    int i,n,a[i];
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}

