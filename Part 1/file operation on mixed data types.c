#include<stdio.h>
int main()
{
    FILE *fp;
    int num,i,quant;
    float price,value;
    char item[10],filename[10];
    printf("Input file name\n");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    printf("Input inventory data\n\n");
    printf("Item name  Number  Price  Quantity\n");
    for(i=1;i<=3;i++)
    {
        fscanf(stdin,"%s %d %f %d",item,&num,&price,&quant);
        fprintf(fp,"%s %d %.2f %d",item,num,price,quant);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp=fopen(filename,"r");
    printf("Item name  Number  Price  Quantity  Value\n");
    for(i=1;i<=3;i++)
    {
        fscanf(fp,"%s %d %f %d",item,&num,&price,&quant);
        value=price*quant;
        fprintf(stdout,"%8s %7d %8.2f %8d %11.2f\n",item,num,price,quant,value);
    }
    fclose(fp);
}

