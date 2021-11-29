// Printing all trignometric Ratios of an angle
#include<stdio.h>
#include <math.h>
int main()
{
    float angle,s,c,t;
    printf("\nEnter the angle : ");
    scanf("%f", &angle);

    angle=angle*3.14/180; // to convert angle from degree to radians

    s=sin(angle);
    c=cos(angle);
    t=tan(angle);

    printf("Sin=%f Cos=%f tan=%f", s,c,t);
    return 0;

}