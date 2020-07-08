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
        printf("The sum of all Diagonal elements=");
        if(r==c)
    for(i=0;i<r;i++)
        s=s+a[i][i];
        printf("%d",s);
    return 0;
}


