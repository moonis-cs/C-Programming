// Determining the position of a point with respect to circle
//  The center of the circle has been assumed to be at (0,0)

#include<stdio.h>
int main()
{
    int r,x,y;
    int dis,d; // d=diamter and dis=distance from center

    printf("\nEnter the radius and cordinates of points(x,y) : ");
    scanf("%d %d %d", &r,&x,&y);

    dis=x*x+y*y;
    d=r*r;

    if(dis==d)
    printf("\nPoint is on the circle");
    else
    {
        if(dis>d)
        printf("\nPoint is outside the circle");
        else
        printf("\npoint is inside the circle");

    }
    return 0;
}