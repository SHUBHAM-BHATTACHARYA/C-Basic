#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    char a[100];
    printf("Enter the string\n");
    gets(a);
    k=strlen(a);
    printf("String length:");
    printf("%d",k);
}

