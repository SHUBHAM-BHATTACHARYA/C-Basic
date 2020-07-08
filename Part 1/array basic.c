#include<stdio.h>
int main()
{
    int i,n,a[100],min=9999;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of 1st array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
        printf("Min value=%d\n",min);
    return 0;
}
