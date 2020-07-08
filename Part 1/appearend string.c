#include<stdio.h>
int main()
{
    int i,l;
    char a[100],b[100];
    printf("Enter the string1\n");
    gets(a);
    printf("Enter the string2\n");
    gets(b);
    for(i=0;a[i]!='\0';i++)
        l=i+1;
    for(i=0;b[i]!='\0';i++)
    {
        a[l]=b[i];
        l++;
    }
    a[l]='\0';
    printf("After appear end:");
    puts(a);
}

