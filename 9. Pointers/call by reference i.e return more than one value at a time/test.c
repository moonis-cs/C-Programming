// a function can return more than one value at a time , then we return these values indirectly by using call by "reference" 

#include<stdio.h>

void areaperi(int,float *,float *);

int main()
{
    int radius;
    float area,peri;

    printf("\nEnter the radius : ");
    scanf("%d", &radius);

    areaperi(radius, &area, &peri);

    printf("Area =%f\n", area);
    printf("peri =%f\n", peri);
    return 0;

}
void areaperi(int r, float *a, float *p)
{
   *a= 3.14*r*r;
   *p=2*3.14*r;
}