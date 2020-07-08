#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the string 1\n");
    gets (a);
    printf("Enter the string 2\n");
    gets (b);
    strcat(a,b);
    printf("string 1:%s\t\t string 2:%s\n",a,b);
    strcat(a,"-One");
    printf("New string:%s\n",a);
}



