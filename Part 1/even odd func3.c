#include<stdio.h>
void find();
int main()
{
    find();
}
find()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even\n",n);
    else
        printf("%d is Odd\n",n);
}
