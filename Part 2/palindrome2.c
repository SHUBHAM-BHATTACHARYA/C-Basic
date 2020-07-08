#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i,f=0;
    printf("Enter the String\n");
    gets (a);
    l=strlen(a)-1;
    for(i=0;i<=l/2;i++)
    {
        if(a[i]==a[l-i])
            f=0;
        else
            f=1;
    }
    if(f==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
