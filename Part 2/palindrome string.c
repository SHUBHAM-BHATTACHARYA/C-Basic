#include<stdio.h>
int main()
{
    int i=0,j,f;
    char s[100];
    printf("Enter the String\n");
    gets (s);
    j=strlen(s)-1;
        while(i<=j)
        {
            if (s[i]==s[j])
             {
                 f=1;
             }
             else
             {
                 f=0;
                 break ;
             }
             i++;
             j--;
          }
        if(f==1)
            printf("String is Palindrome");
        else
            printf("String is not Palindrome");
}
