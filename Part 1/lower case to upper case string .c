#include<stdio.h>
int main()
{
    int i;
    char s[100];
    printf("Enter the string\n");
    gets (s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }
    puts(s);
}

