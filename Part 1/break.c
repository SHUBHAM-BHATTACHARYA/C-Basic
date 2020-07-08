#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i==3)
            break;
        }
        printf("%d",i);
    }
    printf("Hi");
    return 0;
}
