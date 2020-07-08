#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],z[10][10],i,j,r,c;
    printf("Enter the No. of Row");
    scanf("%d",&r);
    printf("Enter the No. of Column");
    scanf("%d",&c);
    printf("Enter the elements of Matrix1\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    printf("Enter the elements of Matrix2\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        z[i][j]=a[i][j]+b[i][j];
    printf("The Addition Matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",z[i][j]);
        printf("\n\n");
    }
    return 0;
}

