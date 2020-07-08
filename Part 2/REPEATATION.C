#include<stdio.h>
int main()
{
    char a[100],k;
    int i,c=0;
    printf("Enter the String\n");
    gets (a);
    printf("Enter the character:");
    scanf("%c",&k);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==k)
           c++;
    }
    printf("%c repeated %d times",k,c);
}

