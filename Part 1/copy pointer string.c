#include<stdio.h>
int main()
{
    char a[100],b[100],*pa,*pb;
    pa=a;
    pb=b;
    printf("Enter the String:");
    gets(a);
    pa=a;
    while(*pa!='\0')
    {
        *pb=*pa;
        pa++;
        pb++;
    }
    *pb='\0';
    printf("The Copied Text is:");
    pb=b;
    while(*pb!='\0')
    {
        printf("%c",*pb);
        pb++;
    }
}
