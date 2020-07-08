#include<stdio.h>
int main()
{
    int i,v=0,c=0;
    char s[100];
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v++;
    else
        c++;
    }
    printf("Vowel=%d",v);
    printf("Consonent=%d",c);
}
