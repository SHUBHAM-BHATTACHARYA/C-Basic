#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main(void)
{
    int i;
    struct student stuarr[3];
    for(i=0;i<3;i++)
    {
        printf("Enter Name,Roll No and Marks:");
        scanf("%s %d %f",stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
    }
    for(i=0;i<3;i++)
        printf("%s %d %.2f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
    return 0;
}
