#include<stdio.h>
void print(int[],int);
int main()
{
    int a[100],i,n;
    printf("Enter No. of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    print(a,n);
}
f(float[],float,int);
void print(int x[],int n)
{
    int i;
    printf("Reverse elements=");
    for(i=n-1;i>=0;i--)
        printf("%d",x[i]);
}
