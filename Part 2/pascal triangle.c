#include<stdio.h>
int main()
{
    int a[100][100],i,j,r;
    printf("Enter the No. of Row & Column");
    scanf("%d",&r);
    printf("Pascal Triangle\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        if(j==0 || i==j)
            a[i][j]=1;
        else
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d\t",a[i][j]);
            printf("\n\n");
    }
    return 0;
}

