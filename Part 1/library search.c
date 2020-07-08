#include<stdio.h>
int main()
{
    int m,l,n,h,i,item,f=0,a[100];
    printf("Enter the No. of elements");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the item to be searched");
        scanf("%d",&item);
        l=0;
        h=n-1;
        while(l<=h)
        {
            m=(l+h)/2;
            if(a[m]==item)
            {
                f=1;
                break;
            }
            else if(a[m]<item)
                l=m+1;
            else
                h=m-1;
        }
        if(f==1)
        printf("item found");
        else
            printf("item not found");
    return 0;
}


