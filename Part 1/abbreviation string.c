#include<stdio.h>
int main()
{
    int i,c=0;
    char a[100];
    printf("Enter the string\n");
    gets (a);
    printf("%c",a[0]);
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ')
            printf("%c",a[i+1]);
    }
}
