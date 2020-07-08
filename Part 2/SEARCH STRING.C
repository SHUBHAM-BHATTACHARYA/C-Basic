#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,f=0,l1,l2;
    char a[100],b[100];
    printf("Enter String\n");
    gets (a);
    printf("Enter String to be searched\n");
    gets (b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1-l2;i++)
    {
        for(j=i;j<i+l2;j++)
        {
            f=1;
            if(a[j]!=b[j-i])
            {
                f=0;
                break;
            }
        }
        if(f==1)
            break;
    }
    if(f==1)
        printf("String is found");
    else
        printf("String is not found");
}
