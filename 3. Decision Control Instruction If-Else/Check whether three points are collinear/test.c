//Check whther three points are co-linear

#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    int s1,s2,s3;

    printf("\nEnter the values of x1 and y1 cordinates of first point : ");
    scanf("%d %d", &x1,&y1);

    printf("\nEnter the values of x2 and y2 cordinates of first point : ");
    scanf("%d %d", &x2,&y2);

    printf("\nEnter the values of y1 and y3 cordinates of first point : ");
    scanf("%d %d", &x3,&y3);

    // calculate the slope of line between each pairs of points 
    s1= abs(x2-x1) / abs(y2-y1);
    s2= abs(x3-x1) / abs(y3-y1);
    s3= abs(x3-x2) / abs(y3-y2);
    if((s1==s2) && (s1==s3))
    printf("Points are co-linear ");
    else
    printf("Points are not co-colinear");

    return 0;
}