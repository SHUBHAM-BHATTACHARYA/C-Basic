#include<stdio.h>
void readarray(int *a,int n);
void printarray(int *a,int n);
void findsmall(int *a,int n,int *small,int *pos);
int main()
{
    int num[10],n,small,pos;
    printf("Enter the No of Elements:");
    scanf("%d",&n);
    readarray(num,n);
    findsmall(num,n,&small,&pos);
    printf("\n The Smallest No =%d",small);
    printf("\n The Position of Smallest No=%d",pos);
}
void readarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n array[%d]=",i);
        scanf("%d",a+i);
    }
}
void printarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("\n array[%d]=%d",i,a[i]);
}
void findsmall(int *a,int n,int *small,int *pos)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(a+i)<*small)
        {
            *small=*(a+i);
            *pos=i+1;
        }
    }
}

