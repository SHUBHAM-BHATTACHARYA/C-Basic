#include<stdio.h>
int main()
{
    int i,n,a[100],s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of 1st array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("sum of all element of 1st array\n");
    for(i=0;i<n;i++)
        s=s+a[i];
        printf("sum=%d",s);
    return 0;
}

