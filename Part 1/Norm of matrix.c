#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s=0;
    printf("Enter the No. of Row");
    scanf("%d",&r);
    printf("Enter the No. of Column");
    scanf("%d",&c);
    printf("Enter the elements of Matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
        printf("The Matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n\n");
    }
    printf("Norm of the Matrix=");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        s=s+a[i][j]*a[i][j];
    printf("%d",s);
    return 0;
}


