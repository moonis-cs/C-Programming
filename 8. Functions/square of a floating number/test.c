#include<stdio.h>

float square(float);
int main()
{
    float a,b;
    printf("\nEnter any number : ");
    scanf("%f", &a);
    b=square(a);
    printf("square of %.1f is %.1f\n", a,b);
    return 0;

}
float square(float x)
{
    float y;
    y=x*x;
    return (y);
}