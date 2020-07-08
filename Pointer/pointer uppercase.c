#include<stdio.h>
int main()
{
    int c,*p;
    p=&c;
    printf("Enter the Character:");
    scanf("%c",&c);
    printf("The Character that was entered:%c\n",*p);
    printf("The ASCII value of the Character:%d\n",*p);
    printf("The Character in Uppercase:%c\n",*p-32);
    return 0;
}
