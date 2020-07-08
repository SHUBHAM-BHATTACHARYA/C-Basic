#include<stdio.h>
int main()
{
    char a[100];
    int i,m,e,l=0;
    printf("Enter the String\n");
    gets(a);
    while(a[l]!='\0')
        l++;
    e=l-1;
    m=l/2;
    for(i=0;i<m;i++)
    {
        if(a[i]!=a[e])
        {
            break;
        }
        e--;
    }
    if(i==m)
        printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
    return 0;
}
