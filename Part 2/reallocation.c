#include<stdio.h>
#include<stdlib.h>
#define NULL 0
int main()
{
    char *s;
    s=(char *)malloc(10);
    if(s==NULL)
    {
        printf("Memory could not be allocated");
        exit(1);
    }
    strcpy(s,"Oxford");
    printf("\n STR=%s",s);
    s=(char *)realloc(s,20);
    if(s==NULL)
    {
        printf("\n Memory could not be reallocated");
        exit(1);
    }
    printf("\n STR size modified");
    printf("\n STR=%s\n",s);
    strcpy(s,"Oxford University");
    printf("\n STR=%s",s);
    free(s);
}
