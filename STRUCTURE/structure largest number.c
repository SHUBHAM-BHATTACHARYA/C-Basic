#include<stdio.h>
int main()
{
    struct numbers
    {
        int a,b,c;
        int largest;
    };
    struct numbers n;
    printf("Enter the three NO:\n");
    scanf("%d %d %d",&n.a,&n.b,&n.c);
    if(n.a>n.b && n.a>n.c)
        n.largest=n.a;
    if(n.b>n.a && n.b>n.c)
        n.largest=n.b;
    if(n.c>n.a && n.c>n.b)
        n.largest=n.c;
    printf("The largest number is:%d",n.largest);
}
