#include<stdio.h>
int main()
{
    int a=5;
    int *pa;
    int **ppa;
    pa=&a;
    ppa=&pa;
    printf("Address of a=%p\n",&a);
    printf("Value of Pa=Address of a=%p\n",pa);
    printf("Value of *Pa=Value of a=%d\n",*pa);
    printf("Address of pa=%p\n",&pa);
    printf("Value of PPa=Address of pa=%p\n",ppa);
    printf("Value of *PPa=Address of pa=%p\n",*ppa);
    printf("Value of **PPa=Value of a=%d\n",**ppa);
    printf("Address of PPa=%p\n",&ppa);
    return 0;
}

