//Demonstration of Nested loops
#include<stdio.h>
int main()
{
    int r,c,sum;

    for(r=1;r<=3;r++) // outer loop
    {
        for(c=1;c<=2;c++)
    {
        sum=r+c;
        printf("\nr=%d \t c=%d \t sum=%d", r,c,sum);
    }
    
    }
    return 0;
}