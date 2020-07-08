#include<stdio.h>
int main()
{
    int i;
    char a[100],b[100];
    printf("Enter the string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("Copied text is :");
    puts(b);
}
