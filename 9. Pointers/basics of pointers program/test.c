#include<stdio.h>

int main()
{
    int i=3;
    printf("Adress of i=%u\n", &i); // address number // %u is for unsigned integer
    printf("Value of i=%d\n",i);    //  this simply gives value of integer i
    printf("value of i=%d\n", *(&i)); // '*' is 'value at address' operator
    return 0;
     
}