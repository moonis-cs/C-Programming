#include<stdio.h>
#include<math.h>

void area_cal(float x,float y,float z, float *A);
float validate(float x, float y, float z);

int main()
{
    float a,b,c,area;
    printf("\nEnter the three sides triangle : ");
    scanf("%f %f %f", &a,&b,&c);

    if (validate(a,b,c))
    {
    area_cal(a,b,c,&area);
    printf("\nArea of triangle = %.2f\n", area);
    }
    else
    {
        printf("\nEnter the valid values for sides of triangle");
    }
    return 0;
}
void area_cal(float x,float y,float z, float *area)
{
    float s;
    s=(x+y+z)/2.0; // semi perimeter 
    *area= sqrt(s*(s-x)*(s-y)*(s-z)); // herons formula for area of triangle
}

float validate(float x, float y, float z)
{
    float flag=0;

    if(x>y && x>z)
    {
        flag=( x<(y+z) ) ;
    }
    else if(y>z)
    {
        flag= ( y<(x+z) ) ;
    }
    else
    {
        flag=z<(x+y);
    }
    return(flag);
}