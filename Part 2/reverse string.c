#include<stdio.h>
int main()
{
    int i,c=0;
    char a[100];
    printf("enter the String\n");
    gets (a);
    for(i=0;a[i]!='\0';i++);
        for(c=i-1;c>=0;c--)
        printf("%c",a[c]);
}
