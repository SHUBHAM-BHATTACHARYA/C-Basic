#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter the No. of Row");
    scanf("%d",&r);
    printf("Enter the No. of Column");
    scanf("%d",&c);
    printf("Enter the elements of Matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
     for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            a[i][j]=a[i][j]*a[i][j];
        printf("The square of elements Matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n\n");
    }
    return 0;
}

