#include<stdio.h>
int main()
{
    int i,n,c=0;
    float s=0,A;
    printf("Enter the No. of elements:");
    scanf("%d",&c);
    printf("Enter the Elements:\n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&n);
        s=s+n;
    }
    A=s/c;
    printf("Average=%f",A);
    return 0;
}
