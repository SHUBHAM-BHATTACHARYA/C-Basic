#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2,i;
    printf("Enter the string 1\n");
    gets(s1);
    printf("Enter the string 2\n");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2);
    {
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            {
                break;
            }

        if(i==l1)

             printf("Both string is same");
            else
            printf("Length is same but Strings are different");
        }

        }
        if(l1!=l2)
        {


         if(s1[i]<s2[i])
                    printf("String 2 is greater");
                else
                 printf("String 1 is greater");
        }
    }





