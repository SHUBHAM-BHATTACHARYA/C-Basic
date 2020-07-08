#include<stdio.h>
void print(int[],int);
int main()
{
    int a[100],i,n;
    printf("Enter No. of elements in array");
    scanf("%d",&n);
    printf("Enter the Numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    print(a,n);
}
f(float[],float,int);
void print(int x[],int n)
{
    int i;
    printf("Reverse array is\n");
    for(i=n;i>0;i--)
        printf("%d\t",x[i]);
}
