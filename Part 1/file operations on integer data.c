#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int n,i;
    printf("Contents of DATA file\n\n");
    f1=fopen("DATA","w");
    for(i=1;i<=30;i++)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        putw(n,f1);
    }
    fclose(f1);
    f1=fopen("DATA","r");
    f2=fopen("ODD","w");
    f3=fopen("EVEN","w");
    while((n=getw(f1))!=EOF)
    {
        if(n%2==0)
            putw(n,f3);
        else
            putw(n,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2=fopen("ODD","r");
    f3=fopen("EVEN","r");
    printf("\n\n Contents of Odd file\n\n");
    while((n=getw(f2))!=EOF)
        printf("%4d",n);
    printf("\n\n Contents of EVEN file\n\n");
    while((n=getw(f3))!=EOF)
        printf("%4d",n);
    fclose(f2);
    fclose(f3);
}
