// Generate and print Intelligence table
// i=2+(y+0.5x)
#include<stdio.h>
int main()
{
    int y;
    float x,i;
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            i=2+(y+0.5*x);
        printf("\n%d\t%f\t%f", y,x,i);
        }
    }
    return 0;
}