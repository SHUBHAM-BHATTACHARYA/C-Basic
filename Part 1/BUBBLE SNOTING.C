#include<stdio.h>
int main()
{
    int i,j,t,n,a[100];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(i=0;i<n;i++)
            printf("%d\b",a[i]);
    return 0;
}



