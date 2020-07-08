#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter the NO.");
    scanf("%d",&n);
    if(prime(n))
        printf("NO. is Prime");
    else
        printf("NO. is not Prime");
}
int prime(int n)
{
    int i,f=1;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return (f);
}
