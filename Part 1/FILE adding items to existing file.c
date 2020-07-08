#include<stdio.h>
struct inventrecord
{
    char name[10];
    int num;
    float price;
    int quant;
};
int main()
{
    struct inventrecord item;
    char filename[10];
    int response;
    FILE *fp;
    long n;
    void append(struct inventrecord *x,FILE *y);
    printf("Type filename:");
    scanf("%s",filename);
    fp=fopen(filename,"a+");
    do
    {
        append(&item,fp);
        printf("\n Item %s appended\n",item.name);
        printf("\n Do you want to add another item\(1 for Yes /0 for No)?");
        scanf("%d",&response);
    }while(response==1);
    n=ftell(fp);
    fclose(fp);
    fp=fopen(filename,"r");
    while(ftell(fp)<n)
    {
        fscanf(fp,"%s %d %f %d",item.name,&item.num,&item.price,&item.quant);
        fprintf(stdout,"%8s %7d %8.2f %8d\n",item.name,item.num,item.price,item.quant);
    }
    fclose(fp);
}
void append(struct inventrecord *product,FILE *ptr)
{
    printf("Item name:");
    scanf("%s",product->name);
    printf("Item number:");
    scanf("%d",&product->num);
    printf("Item price:");
    scanf("%f",&product->price);
    printf("Quantity:");
    scanf("%d",&product->quant);
    fprintf(ptr,"%s %d %.2f %d",product->name,product->num,product->price,product->quant);
}

