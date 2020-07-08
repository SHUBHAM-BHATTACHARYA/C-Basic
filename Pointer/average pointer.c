#include<stdio.h>
int main()
{
    int m,*pm,n,*pn,s=0,*ps,c=0,*pc;
    float avg,*pavg;
    pm=&m;
    pn=&n;
    ps=&s;
    pc=&c;
    pavg=&avg;
    printf("Enter the starting limit");
    scanf("%d",pm);
    printf("Enter the ending limit");
    scanf("%d",pn);
    while(*pm<=*pn)
    {
        *ps=*ps+*pm;
        *pm=*pm+1;
        *pc=*pc+1;
    }
    printf("Sum of numbers=%d\n",*ps);
    printf("Total NO=%d\n",*pc);
    *pavg=*ps/(float)(*pc);
    printf("Average of numbers=%f\n",*pavg);
}
