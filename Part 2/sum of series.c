#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num;
    double sum=0,term,i,fact=1;
    double factorial(int i);
    printf("Input Number of terms:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        term=pow(i,i);
        fact=factorial (i);
        sum=sum+(term/fact);
    }
    printf("sum=%f\n",sum);
    getch();
    return 0;
}
double factorial (int n)
{
    int i;
    double f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
