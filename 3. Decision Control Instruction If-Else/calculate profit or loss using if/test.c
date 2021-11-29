//Calculating Profit or loss
#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("\nEnter the Cost Price and Selling Price : ");
    scanf("%f %f", &cp,&sp);
    
    p=sp-cp;
    l=cp-sp;

    if(p>0)
    printf("\nSeller has made a profit of Rs.%f\n", p);

    if(l>0)
    printf("\nSeller has made a loss of Rs.%f\n", l);

    if(p==0)
    printf("\nNeither profit nor loss");
    return 0;
}