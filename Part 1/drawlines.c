#include<stdio.h>
void drawline(void);
int main()
{
    drawline();
}
void drawline(void)
{
    int i;
    for(i=1;i<=80;i++)
        printf("-\t");
}
