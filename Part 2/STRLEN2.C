#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l;
    printf("Enter the string\n");
    gets (s);
    l=strlen(s);
    printf("string length is:%d",l);
}

