#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],s1[100],b[100];
    int pos,i,j;
    printf("enter the string");
    gets(s1);
    printf("enter the position");
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        a[i]=s1[i];
    }
    a[i]='\0';
    for(i=pos;s1[i]!='\0';i++)
    {
        j=0;
        b[j]=s1[i];
    }
    b[j]='\0';
    puts(b);
}
