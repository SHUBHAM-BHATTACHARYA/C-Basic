#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string\n");
    gets(a);
    strrev(a);
    printf("After Reversing:");
    puts(a);
}


