// Generating all the armstrong numbers between 1 to 500  // e.g 153
#include<stdio.h>
int main()
{
    int i=1,a,b,c;
    printf("\nArmstrong number b/w 1 and 500 are : ");

    while(i<=500)
    {
        a=i%10; // extract last digit
        b=i%100;
        b=(b-a)/10; //extarct second digit
        c= i/100; // extract  first digit

        if((a*a*a) + (b*b*b) + (c*c*c) ==i)

        printf("\n%d",i);
        i++;
    }

    return 0;
}