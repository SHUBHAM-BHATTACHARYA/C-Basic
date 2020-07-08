#include<stdio.h>
int main()
{
    char a[100],b[100],*pa,*pb;
    int n,i=0;
    pa=a;
    pb=b;
    printf("Enter the String:");
    gets(a);
    printf("Enter the NO of character to be copied from last:");
    scanf("%d",&n);
    pa=pa+strlen(a)-n;
    while(*pa!='\0')
    {
        *pb=*pa-32;
        pa++;
        pb++;
    }
    *pb='\0';
    printf("The Copied Text is:");
    puts(b);
}


