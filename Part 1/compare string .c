#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i=0,l1=0,l2=0,f=0;
    printf("Enter the string 1\n");
    gets (a);
    printf("Enter the string 2\n");
    gets (b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2)
    {
        while(i<l1)
        {
            if(a[i]==b[i])
                i++;
            else
                break;
        }
        if(i==l1)
        {
            f=1;
            printf("Two strings are equal");
        }
    }
    if(l1!=l2)
        printf("Two strings are not equal\n");
    if(f==0)
    {
        if(a[i]>b[i])
            printf("String1 is greater");
        else if(a[i]<b[i])
            printf("String2 is greater");
    }
}



