#include<stdio.h>
int main()
{
    float a,b,s=0.0,*pa,*pb,*ps;
    pa=&a;
    pb=&b;
    ps=&s;
    printf("Enter the Two Numbers:");
    scanf("%f %f",pa,pb);
    *ps=*pa+*pb;
    printf("%f+%f=%.2f",*pa,*pb,*ps);
}
