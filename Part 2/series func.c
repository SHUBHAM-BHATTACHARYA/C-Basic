#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float factorial(int n);
int main()
{
    int n,i;
    float s=1,f;
   printf("Enter the No. of terms:");
   scanf("%d",&n);
   for(i=1;i<=n;i++);
   f=factorial(i);
   s=s+(1/f);
   printf("sum=%f\n",s);
}
float factorial(int n)
{
    int i;
    float f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return (f);
}
