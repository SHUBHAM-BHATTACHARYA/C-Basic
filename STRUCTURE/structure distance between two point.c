#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    typedef struct point
    {
        int x,y;
    }POINT;
    POINT p1,p2;
    float distance;
    printf("\n Enter the Coordinates of the First Point:");
    scanf("%d %d",&p1.x,&p1.y);
    printf("\n Enter the Coordinates of the Second Point:");
    scanf("%d %d",&p2.x,&p2.y);
    distance=sqrt((pow((p1.x-p2.x),2))+(pow((p1.y-p2.y),2)));
    printf("\n Coordinates of the 1st point are:%dx %dy:",p1.x,p1.y);
    printf("\n Coordinates of the 1st point are:%dx %dy:",p2.x,p2.y);
    printf("\n Distance between p1 and p2=%f",distance);
    getch();
    return 0;
}
