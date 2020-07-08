#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1;
    printf("Enter the string\n");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    l1=strcmp(s1,s2);
    if(l1==0)
    printf("Palindrome");
    else
        printf("Not Palindrome");
}

