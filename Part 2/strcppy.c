#include<stdio.h>
int strcpy1(char[],char[]);
int main()
{
    int l;
    char a[100],b[100];
    printf("Enter the String\n");
    gets (a);
    strcpy1(a,b);

}
int strcpy1(char x[],char y[])
{
    int i=0;
    while(x[i]!='\0')
    {
        y[i]=x[i];
        i++;
    }
    y[i]='\0';
    printf("After copied:");
    puts (y);
}


