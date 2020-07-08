#include<stdio.h>
int main()
{
    int i,n,a[10],max=-9999,pos,*pn,*pa,*pmax,*ppos;
    pa=&a;
    pn=&n;
    pmax=&max;
    ppos=&pos;
    printf("Enter the NO of Elements:");
    scanf("%d",pn);
    for(i=0;i<*pn;i++)
    {
        printf("Enter the %dth element:",i);
        scanf("%d",pa+i);
    }
    for(i=0;i<*pn;i++)
    {
        if(*(pa+i)>*pmax)
        {
            *pmax=*(a+i);
            *ppos=i+1;
        }
    }
    printf("\n The numbers you entered are:");
    for(i=0;i<*pn;i++)
        printf("\n a[%d]=%d",i,*(pa+i));
    printf("\n The Largest of these No is:%d",*pmax);
    printf("\n The Position of largest No is:%d",*ppos);

}


