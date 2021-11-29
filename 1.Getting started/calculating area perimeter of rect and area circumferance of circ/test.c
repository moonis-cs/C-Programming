//wrting a program to calculate area n perimeter of rect and also area and circumferance of circle 

#include<stdio.h>

int main()
{
    int l,b,r,area1,perimeter;
    float area2,circumferance;

    printf("\nEnter the Length and Breadth of Rectangle :");
    scanf("%d %d", &l,&b);

    area1=l*b; // formulla for area of rectangle
    perimeter= 2*l+2*b;// formula for perimetr of rect 
    
    printf("\nArea of Rect=%d", area1);
    printf("\nPerimetr of rectagle=%d", perimeter);

    printf("\nEnter the radius of a circle :");
    scanf("%d", &r);

    area2=3.14*r*r; // formulla for area of circle is pie*r^2
    circumferance=2*3.14*r; // formulla for circum of circle is 2*pie*r

    printf("\nArea of circle=%f", area2);
    printf("\nCircum of circle=%f", circumferance);

    return 0;
}