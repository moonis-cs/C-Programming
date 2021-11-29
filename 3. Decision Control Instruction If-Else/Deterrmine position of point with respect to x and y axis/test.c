//Determine the position of a point with respect to x and y axis 
#include<stdio.h>
int main()
{
    int x,y;

    printf("\nEnter the x and y cordinates  of point : ");
    scanf("%d %d", &x,&y);

    if(x==0 && y==0)
    printf("\npoint lies on origin");
    else
    {
        if(x==0 && y!=0)
        printf("\nPoint lies on y-axis");
        else
        if(x!=0 && y==0)
        printf("Point lies on x-axis");
        else
        printf("point neither lies on any axis and nor on axis ");

    }
    return 0;
}