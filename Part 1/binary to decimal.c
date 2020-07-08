#include<stdio.h>
int main()
{
    int i,n,a[100],s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=s+(a[i]*pow(2,n-i-1));
    }
        printf("%d",s);
    return 0;
}
