#include<stdio.h>
#define PI 3.14 // Pi is macro template where as 3.14 is macro expansion
int main()
{
    float r=6.25, area;
    area=PI*r*r;
    printf("\nArea of circle =%f\n", area);
    return 0;
    
}