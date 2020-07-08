#include<stdio.h>
int main()
{
    int i,j,item,a[100],n,pos;
    printf("Enter the value of elements:");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the new position:");
        scanf("%d",&pos);
        printf("Enter the item to be insert:");
        scanf("%d",&item);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=item;
    n=n+1;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}

