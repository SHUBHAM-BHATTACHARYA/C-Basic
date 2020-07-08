#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter the No. of Row");
    scanf("%d",&r);
    printf("Enter the No. of Column");
    scanf("%d",&c);
    printf("Enter the elements of Matrix1\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
        b[i][j]=a[j][i];
    printf("The Transpose of Matrix is\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d\t",b[i][j]);
        printf("\n\n");
    }
    return 0;
}


