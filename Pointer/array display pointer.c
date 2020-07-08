#include<stdio.h>
int main()
{
    int i,n,a[10],*pa,*pn;
    pa=&a;
    pn=&n;
    printf("Enter the NO of Elements:");
    scanf("%d",pn);
    for(i=0;i<*pn;i++)
    {
        printf("Enter the %dth element:",i);
        scanf("%d",pa+i);
    }
    for(i=0;i<*pn;i++)
        printf("\n a[%d]=%d",i,*(pa+i));

}
