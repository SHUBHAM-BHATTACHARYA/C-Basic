#include<stdio.h>
int main()
{
    char a[100],b[100],*pa,*pb;
    int m,n,i=0;
    pa=a;
    pb=b;
    printf("Enter the String:");
    gets(a);
    printf("Enter the position from which to start:");
    scanf("%d",&m);
    printf("Enter the NO of character to be copied:");
    scanf("%d",&n);
    pa=pa+m-1;
    i=0;
    while(*pa!='\0'&&i<n)
    {
        *pb=*pa;
        pa++;
        pb++;
        i++;
    }
    *pb='\0';
    printf("The Copied Text is:");
    puts(b);
}

