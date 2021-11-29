// Computing the natural log 
// x-1/x  +  1/2(x-1/x)^2  +  1/2(x-1/x)^3  +  1/2(x-1/x)^4 ........ upto first 7 terms of this series

#include<stdio.h>
#include<math.h>

int main()
{
    int i,x;
    float result=0.0;
    printf("\nEnter the value of x :");
    scanf("%d", &x);

    for(i=1;i<=7;i++)
    {
        if(i==1)
        result=result+pow((x-1.0)/x,i);
        else
        result= result+(1.0/2)*pow((x-1.0)/x,i);

    }
    printf("\nLog(%d) = %f", x,result);
    
    return 0;
}