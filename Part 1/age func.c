#include<stdio.h>
int func(int age,float ht);
int main()
{
    int age;
    float ht;
    printf("Enter Age and Height\n");
    scanf("%d %f",&age,&ht);
    func(age,ht);
}
int func(int age,float ht)
{
    if (age>25)
    {
        printf("Age should be less than 25\n");
        return;
    }
    if(ht<5)
    {
        printf("Height should be more than 5\n");
        return;
    }
    printf("Selected\n");
}
