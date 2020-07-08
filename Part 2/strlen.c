#include<stdio.h>
#include<string.h>
int strlen1(char x[]);
int main()
{
    int l;
    char a[100];
    printf("Enter the String\n");
    gets (a);
    l=strlen(a);
    printf("string length=%d",l);

}
int strlen1(char x[])
{
    int i=0;
    for(i=0;x[i]!='\0';i++)
        return x[i];
}

