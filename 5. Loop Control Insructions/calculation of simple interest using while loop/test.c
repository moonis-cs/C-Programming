// Calculation of simple interest using the while loop
#include<stdio.h>
int main()
{
    int p,n,count=1;
    float r,si;

    while(count<=3)
    {
        printf("\nEnter the values of p,n and r : ");
        scanf("%d %d %f", &p,&n,&r);
        si=p*n*r/100;

        printf("\nS.I=Rs.%f",si);
        count=count+1;

    }
    return 0;

}