#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i=0,j=0,k=0,p;
    printf("Enter the string\n");
    gets (a);
    printf("Enter the string to be inserted:");
    gets(b);
    printf("Enter the position:");
    scanf("%d",&p);
    while(a[i]!='\0')
    {
          if(i==p-1)
          {
              while(b[k]!='\0')
              {
                  c[j]=b[k];
                  j++;
                  k++;
              }
          }
          else
          {
              c[j]=a[i];
              j++;
          }
          i++;

    }
    c[j]='\0';
    printf("The New String is:");
    puts(c);
}


