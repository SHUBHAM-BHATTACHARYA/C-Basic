#include<stdio.h>
int main()
{
    char s[100],*ps;
    int c=0,w=1,l=0;
    ps=s;
    printf("Enter the String:");
    gets(s);
    while(*ps!='\0')
    {
        if(*ps==' ')
            w++;
        else
            c++;
        l++;
        ps++;
    }
    printf("The String is:\n");
    puts(s);
    printf("Length of String:%d\n",l);
    printf("NO of Characters=%d\n",c);
    printf("NO of words=%d",w);
}
