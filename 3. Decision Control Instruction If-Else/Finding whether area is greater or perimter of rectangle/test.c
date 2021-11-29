//Finding whether area of rectangle is greater or its perimter
#include<stdio.h>
int main()
{
    int l,b,peri,area;
    printf("\nEnter the length and breadth of a rectangle : ");
    scanf("%d %d", &l,&b);

    area=l*b;
    peri=2*(l+b);

    if(area>peri)
    printf("\nArea of rectangle is greater than its perimeter");
    else
    printf("\nPeri of rectangle is greater than its area");
    return 0;
}