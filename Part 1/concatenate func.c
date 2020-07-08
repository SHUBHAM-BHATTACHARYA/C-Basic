#include<stdio.h>
#include<string.h>
int strcat1(char[],char[]);
int main()
{
    int l;
    char a[100],b[100];
    printf("Enter the String 1\n");
    gets (a);
    printf("enter string 2\n");
    gets (b);
    strcat1(a,b);

}
int strcat1(char x[],char y[])
{
    int i=0,j=0;
    char s[100];
    while(x[i]!='\0')
    {
        s[i]=x[i];
        i++;
    }
    while(y[j]!='\0')
    {
        s[i]=y[j];
        i++;
        j++;
    }
    printf("After concatenation:");
    puts (s);
}



