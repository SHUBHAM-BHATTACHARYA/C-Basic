#include<stdio.h>
int main()
{
    int m,*pm,n,*pn,s=0,*ps;
    pn=&n;
    pm=&m;
    ps=&s;
    printf("Enter the starting limit:");
    scanf("%d",pm);
    printf("Enter the ending limit:");
    scanf("%d",pn);
    printf("Even=");
    while(*pm<=*pn)
    {
        if(*pm%2==0)
        {
           printf("%d\t",*pm);
           *ps=*ps+*pm;
        }
        *pm=*pm+1;
    }
    printf("\nSum of Even No=%d",*ps);
}
