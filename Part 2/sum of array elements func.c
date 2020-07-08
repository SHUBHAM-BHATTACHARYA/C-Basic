#include<stdio.h>
void sum(int[],int);
int main()
{
    int a[100],i,n,s=0;
    printf("Enter No. of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sum(a,n);
}
void sum(int x[],int n)
{
    int i,s=0;
    printf("Sum of elements=");
    for(i=0;i<n;i++)
        s=s+x[i];
        printf("%d",s);
}

