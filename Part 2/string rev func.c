#include<stdio.h>
int strrev1(char[]);
int main()
{
    char a[100];
    printf("Enter the string\n");
    gets (a);
    strrev1(a);
}
int strrev1(char x[])
{
    int i=0,c;
    while (x[i]!='\0')
    {
        i++;
    }
    c=i-1;
    while(c>=0)
    {
        printf("%c",x[c]);
        c--;
    }
}
