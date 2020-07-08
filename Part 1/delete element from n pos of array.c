#include<stdio.h>
int main()
{
    int i,j,a[100],n,pos;
    printf("Enter the value of elements");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the Position:");
        scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
        a[i]=a[i+1];
        n=n-1;

    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}


