#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c;
    printf("Enter the No. of Row");
    scanf("%d",&r);
    printf("Enter the No. of Column");
    scanf("%d",&c);
    printf("Enter the elements of Matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
        printf("The Diagonal elements is\n");
        if(r==c)
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        if(i+j==r-1)
        printf("%d\t",a[i][j]);
    }
    else
        printf("Not possible");
    return 0;
}
