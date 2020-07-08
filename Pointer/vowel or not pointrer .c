#include<stdio.h>
int main()
{
    char c,*pc;
    pc=&c;
    printf("Enter the Character:");
    scanf("%c",pc);
    if(*pc=='a'||*pc=='e'||*pc=='i'||*pc=='o'||*pc=='u'||*pc=='A'||*pc=='E'||*pc=='I'||*pc=='O'||*pc=='U')
        printf("%c is Vowel",*pc);
    else
        printf("%c is Consonant",*pc);
}

