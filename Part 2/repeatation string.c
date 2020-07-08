#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char a[100],k;
    printf("Enter the string\n");
    gets (a);
    printf("Enter the character:");
    scanf("%c",&c);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==32)
        {
            c++;
        }
        if(a[i])
    }
    printf("%d",c);
}
