#include<stdio.h>
int search(int[],int);
int main()
{
    int i,a[100],n,item;
    printf("Enter the NO of elements:");
    scanf("%d",&n);
    printf("Enter the NO\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    search (a,n);
}
f(float[],float,int);
int search(int x[],int n)
{
    int i,item,f=1;
    for(i=0;i<n;i++)
    {
        if(x[i]==item)
        {
            f=1;
        break;
        }
    }
    if(f==1)
    printf("Item found");
    else
        printf("Item not found");
}
