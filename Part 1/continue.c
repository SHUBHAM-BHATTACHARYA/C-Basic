#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
            continue;
        printf("%d",i);
    }
    return 0;
}
