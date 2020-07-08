#include<stdio.h>
#include<string.h>
int strcmp1(char[],char[]);
int main()
{
    char a[100],b[100];
    printf("Enter the String 1:");
    gets (a);
    printf("Enter string 2:\n");
    gets (b);
    strcmp1(a,b);

}
int strcmp1(char x[],char y[])
{
    int i,f=0,l1,l2;
    l1=strlen(x);
    l2=strlen(y);
    if(l1==l2)
    {
        for(i=0;x[i]!='\0';i++)
        if(x[i]!=y[i])
        {
            f=1;
            break;
        }
        if(f==0)
            printf("Strings are Equal");
        else
            printf("Strings are not Equal but Length is Same");
    }
    else if(l1>l2)
        printf("String 1 is Greater");
    else
        printf("String 2 is Greater");
}




