// Finding area of a triangle 
#include <stdio.h>
#include <math.h> // for sqrt 

int main()
{
    float a,b,c,sp,area;
    printf("\nEnter the sides of a triangle :");
    scanf("%f%f%f", &a,&b,&c);

    sp=(a+b+c)/2; // formulla of semi-perimeter of triangle
    area= sqrt(sp*(sp-a)*(sp-b)*(sp-c)); // formulla of area of triangle

    printf("\nArea of Traingle =%f", area);
    return 0;
}