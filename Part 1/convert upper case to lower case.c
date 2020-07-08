#include<stdio.h>
int main()
{
    char x;
    printf("enter the letter");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    {
        x=x-32;
        printf("%c",x);
    }
    else if(x>='A'&&x<='Z')
    {
        x=x+32;
        printf("%c",x);
    }
    else
        printf("not letter");
    return 0;
}
