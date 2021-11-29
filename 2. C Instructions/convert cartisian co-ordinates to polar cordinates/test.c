// converting cartisian co-ordinates to polar co-ordinates
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;

    printf("\nEnter the cartisian co-ordinates : ");
    scanf("%f %f", &x,&y);

    r=sqrt(x*x+y*y); // formulla for conversion
    theta=atan2(y,x); // atan2 in programming means tan inverse y/x // atan2 returns the arc tangent in radians of y/x i.e it will return a value b/w pie and -pie
    theta=theta*180/3.14; // convert to degrees

    printf("r=%f and theta=%f", r,theta);
    return 0;
}