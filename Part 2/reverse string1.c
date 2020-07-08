#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],t;
    int i=0,j=0;
    printf("Enter the string\n");
    gets (a);
    j=strlen(a);
    while(i<j)
    {
          t=a[j];
          a[j]=a[i];
          a[i]=t;
          i++;

    }
    printf("The Reverse String is:");
    printf("%S",a);
}

