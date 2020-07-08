#include<stdio.h>
int main()
{
    char c,*pc;
    pc=&c;
    printf("Enter the Character:");
    scanf("%c",pc);
    if(*pc>='A'&&*pc<='Z')
        printf("Upper case Character was Entered");
    if (*pc>='a'&&*pc<='z')
        printf("Lower case character was Entered");
        else if(*pc>='0'&&*pc<='9')
            printf("It was a Number");
}



