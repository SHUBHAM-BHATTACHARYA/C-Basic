#include<stdio.h>
int main()
{
    char a[100],b[100],c[100],*pa,*pc;
    pa=a;
    pc=c;
    printf("Enter the First String:");
    gets(a);
    printf("Enter the Second string:");
    gets(b);
    pa=a;
    while(*pa!='\0')
    {
        *pc=*pa;
        pa++;
        pc++;
    }
    pa=b;
    while(*pa!='\0')
    {
        *pc=*pa;
        pc++;
        pa++;
    }
    *pc='\0';
    printf("The New Text is:");
    pc=c;
    while(*pc!='\0')
    {
        printf("%c",*pc);
        pc++;
    }
}

