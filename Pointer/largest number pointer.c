#include<stdio.h>
int main()
{
    int a,b,c,*pa,*pb,*pc;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("Enter the 1st NO:");
    scanf("%d",pa);
    printf("Enter the 2nd NO:");
    scanf("%d",pb);
    printf("Enter the 3rd NO:");
    scanf("%d",pc);
    if(*pa>*pb && *pa>*pc)
        printf("%d is largest NO",*pa);
    if(*pb>*pa && *pb>*pc)
        printf("%d is largest NO",*pb);
    else
        printf("%d is largest NO",*pc);
}
