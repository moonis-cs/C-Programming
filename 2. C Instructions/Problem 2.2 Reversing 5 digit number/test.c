//Reversing a 5 digit number
#include<stdio.h>

int main()
{
    int n,d5,d4,d3,d2,d1,revnum;

    printf("\nEnter the 5 digit number : ");
    scanf("%d", &n);

    d5=n%10; // 5th digit // remainder
    n=n/10; // remaining digits // quotient

    d4=n%10; // 4th digit
    n=n/10;

    d3=n%10; // 3rd digit
    n=n/10;

    d2=n%10; // 2nd digit
    n=n/10; //  remaining digits

    d1=n%10; // 1st digit // 

    revnum = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;

printf("\nReverse number will be=%d", revnum);

return 0;
}