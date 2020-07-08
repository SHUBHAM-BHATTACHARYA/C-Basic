#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("Value of P=Address of a=%p\n",p);
    printf("Value of P=%p\n",++p);
    printf("Value of P=%p\n",p++);
    printf("Value of P=%p\n",p);
    printf("Value of P=%p\n",--p);
    printf("Value of P=%p\n",p--);
    printf("Value of P=%p\n",p);
    return 0;
}
