#include<stdio.h>
int main()
{
    struct player
    {
        char name[100];
        char team[100];
        int runs;
    };
    struct player r[100];
    int n,i,k,max=0;
    printf("Enter the NO of Player:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Name:");
        scanf("%s",r[i].name);
        printf("Enter the Team Name:");
        scanf("%s",r[i].team);
        printf("Enter the Runs:");
        scanf("%d",&r[i].runs);
    }
    for(i=0;i<n;i++)
    {
        if(r[i].runs>max)
        {
         max=r[i].runs;
         k=i;
        }
    }
    printf("Highest Scorer:%s",r[k].name);
}


