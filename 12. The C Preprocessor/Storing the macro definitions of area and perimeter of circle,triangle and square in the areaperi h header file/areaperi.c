// Program to use macros in header file "areaperi.h"//
#include<stdio.h>
#include "areaperi.h"
int main()
{
    int a,b;
    float side1,side2,side3,side,p_tri,a_tri,p_cir,a_cir,p_sqr,a_sqr;
    float r,base,height;

    printf("\nEnter the radius of a circle :");
    scanf("%f",&r);
    p_cir= PERIC(r);
    printf("Circumference of a circle=%f\n", p_cir);
    a_cir=AREAC(r);
    printf("Area of a circle=%f\n",a_cir);


    printf("\nEnter the sides of a square : ");
    scanf("%f",&side);
    p_sqr=PERIS(side);
    printf("Perimeter of a square=%f\n", p_sqr);
    a_sqr=AREAS(side);
    printf("Area of a square=%f\n", a_sqr);

    printf("\nEnter the three sides of a triagle :");
    scanf("%f %f %f", &side1,&side2,&side3);
    p_tri=PERIT(side1,side2,side3);
    printf("Perimeter of a traingle=%f\n", p_tri);

    printf("\nEnter the base and height of a triangle : ");
    scanf("%f %f",&base,&height);
    a_tri=AREAT(base,height);
    printf("Area of a triangle=%f\n",a_tri);
    return 0;
}
