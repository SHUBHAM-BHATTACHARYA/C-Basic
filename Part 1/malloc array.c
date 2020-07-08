#include<stdio.h>
int main()
{
    int i,n;
    int *a;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("\n Memory Allocation Failed");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("\n Enter the %dth value of the array:",i);
        scanf("%d",&a[i]);
    }
    printf("\n The array contains the following values-\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
