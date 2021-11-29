// main program to calculate simple interest and amount by including "interest.h" header file

#include<stdio.h>
#include"interest.h"

int main()
{
    int p,n;
    float amt,si,r;

    printf("\nENter PRinciple , no of years and rate of interest : ");
    scanf("%d %d %f",&p,&n,&r);

    si=SI(p,n,r);
    amt=AMT(si,p);

    printf("Simple Interest :%f\nAmount is:%f\n",si,amt);
    return 0;
}