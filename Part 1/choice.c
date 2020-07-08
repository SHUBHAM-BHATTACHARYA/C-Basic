#include<stdio.h>
void dispmenu(void);
int main()
{
    int choice;
    dispmenu();
    printf("Enter your choice");
    scanf("%d",&choice);
}
void dispmenu(void)
{
   printf("1.Create database\n");
   printf("2.Insert new record\n");
   printf("3.Modify a record\n");
   printf("4.Delete a record\n");
   printf("5.Display all records\n");
   printf("6.Exit\n");

}

