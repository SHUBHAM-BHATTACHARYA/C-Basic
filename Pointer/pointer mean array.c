#include<stdio.h>
int main()
{
    int i,n,a[10],*pa,*pn,s=0,*ps;
    float A=0.0,*pA;
    pa=&a;
    pn=&n;
    ps=&s;
    pA=&A;
    printf("Enter the NO of Elements:");
    scanf("%d",pn);
    for(i=0;i<*pn;i++)
    {
        printf("Enter the %dth element:",i);
        scanf("%d",pa+i);
    }
    for(i=0;i<*pn;i++)
        *ps=*ps+*(a+i);
    *pA=(float)(*ps)/(*pn);
    printf("\n The numbers you entered are:");
    for(i=0;i<*pn;i++)
        printf("\n a[%d]=%d",i,*(pa+i));
    printf("\n The Sum of these No is:%d",*ps);
    printf("\n The Average of these No is:%f",*pA);

}

