#include<stdio.h>
void calc_gcd(int ,int , int *);
int main()
{
    int j,k,gcd; // j is numerator and k is denomintor and gcd is greatest common divisor

    printf("\nEnter 2 integers : ");
    scanf("%d %d", &j,&k);

    calc_gcd(j,k,&gcd);

    printf("\nGreatest common divisor of %d and %d is %d\n", j,k,gcd);
}

void calc_gcd(int numerator,int denominator, int *gcd)
{
    int temp,num;
    if(denominator==0)
    {
        *gcd=numerator;
    }
    else{

        num=numerator/denominator;
        temp=numerator-num*denominator;

        

        while(temp!=0)
        {
        numerator=denominator;
        denominator=temp;

        num=numerator/denominator;
        temp=numerator-num*denominator;

        }
        *gcd=denominator;
    }
}