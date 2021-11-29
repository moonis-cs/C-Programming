#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float a,p,q,r,n;

    for(i=1;i<=10;i++)
    {
        printf("\nEnter the Principal amount : ");
        scanf("%f",&p);

        printf("\nEnter the rate of interest :");
        scanf("%f",&r);

        printf("\nEnter the No of Years : ");
        scanf("%f",&n);

        printf("\nEnter the Compouding period : ");
        scanf("%f",&q);

        a= p + pow((1+(r/q)),(n*q));

        printf("\n\nTotal amount=%d\n", a);

    }
    return 0;
}