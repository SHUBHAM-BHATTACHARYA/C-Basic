#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i=0,j=0,k=0,f=0,p,n;
    printf("Enter the string\n");
    gets (a);
    printf("Enter the string to be deleted:");
    gets(b);
    printf("Enter the position:");
    scanf("%d",&p);
    while(a[i]!='\0')
    {
          j=0,f=0,k=i;
          while(a[k]==b[j] && b[j]!='\0')
              {
                  k++;
                  j++;
              }
              if(b[j]=='\0')
                f=k;
              c[n]=a[f];
              i++;
              f++;
              n++;
          }
          c[n]='\0';
    printf("The New String is:");
    puts (c);
}



