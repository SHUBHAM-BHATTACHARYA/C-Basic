#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2;
    printf("Enter the string 1\n");
    gets(s1);
    printf("Enter the string 2\n");
    gets(s2);
    l1=strcmp(s1,s2);
    if(l1==0)
        printf("strings are equal");
   else if(l1<0)
        printf("2nd string is greater");
    else
        printf("1st string is greater");
}
