#include<stdio.h>
int main()
{
    char *filename;
    FILE *fp1,*fp2;
    int i,num;
    fp1=fopen("TEST","w");
    for(i=10;i<=100;i+=10)
        putw(i,fp1);
    fclose(fp1);
    printf(" INPUT filename\n");
    openfile:
    scanf("%s",filename);
    if((fp2==fopen(filename,"r"))==NULL)
    {
        printf("Cannot open the file\n");
        printf("Type filename again\n\n");
        goto openfile;
    }
    else
        for(i=1;i<=20;i++)
    {
        num=getw(fp2);
        if(feof(fp2))
        {
            printf("\n Ran out of data\n");
            break;
        }
        else
            printf("%d\n",num);
    }
    fclose(fp2);
}
