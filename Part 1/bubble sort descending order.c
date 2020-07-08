#include<stdio.h>
int main()
{
    int i,j,temp,n,a[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Descending order of given numbers is\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    return 0;
}




