//  note that in 'call by values'  a and b remain unchanged even after excahnging the values of  x and y

#include<stdio.h>

void swapv(int x, int y);
int main()
{
    int a=20, b=10;
    swapv(a,b);
    printf("\na=%d \t b=%d\n", a,b);
    return 0;
}
void swapv(int x,int y)
{
    int t;
    
    t=x;
    x=y;
    y=t;

    printf("\nx=%d \t y=%d", x,y);
}