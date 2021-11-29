// Determine whether the sum of squares of sin and cos of an angle == 1
#include<stdio.h>
#include<math.h>

int main()
{
int angle,sum;

printf("\nEnter the angle in degrees : ");
scanf("%d", &angle);

angle = angle * 3.14/180; // degree to radians

sum= pow(sin(angle),2) + pow(cos(angle),2) ;

if(sum==1)
printf("\nSum of square of sin and cos is equal to 1");
else
printf("Sum of squares of sin and cos is not equal to 1");

return 0;
}