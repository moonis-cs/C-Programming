// find octal equivalent of a number // 300 // 454
#include<stdio.h>
#include<math.h>
int main()
{
    int number,num,oct=0,p=0; // p is place i.e ones , tens and hundreds place....

    printf("\nEnter the decimal number to find its octal : ");
    scanf("%d", &number);

    while(number>0)
    {
        num= number%8; // e.g; 300%8=4 i.e num is 4       // number will store 37 and so on // 37%8=4  // 4%8=4
        oct= oct+num*pow(10,p); // 4*10^0 = 4 i.e octal is 4    // oct=4 ie 4+ 5*10^1 = 54       // oct=54 + 4*10^2 =454
        number= number/8; // 300/8 =37                   // 37/8=4                   // 4/8=0 loop will stop
        p++;
         

    }
    printf("\nOctal value is %d", oct);
    return 0;
}