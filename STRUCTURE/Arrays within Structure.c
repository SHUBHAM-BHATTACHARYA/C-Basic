#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int submarks[3];
};
int main(void)
{
    int i,j;
    struct student stuarr[3];
    for(i=0;i<3;i++)
    {
        printf("Enter Data for Student %d\n",i+1);
        printf("Enter Name:");
        scanf("%s",stuarr[i].name);
        printf("Enter Roll No:");
        scanf("%d",&stuarr[i].rollno);
        for(j=0;j<3;j++)
        {
            printf("Enter Marks for Subject %d:",j+1);
            scanf("%d",&stuarr[i].submarks[j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("Data of Student %d\n",i+1);
        printf("Name=%s  Roll NO=%d\n",stuarr[i].name,stuarr[i].rollno);
        for(j=0;j<3;j++)
            printf("Marks=%d",stuarr[i].submarks[j]);
        printf("\n");
    }
    return 0;
}

