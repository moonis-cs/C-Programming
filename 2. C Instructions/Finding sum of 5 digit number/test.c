// sum of digits of 5 digit number
#include<stdio.h>

int main()
{
    int n,d5,d4,d3,d2,d1,num;
    int sum=0; // initializing sum=0 to avoid garbage value

    printf("\nEnter the 5 digit number : ");
    scanf("%d", &num);

    d5=num%10; // 5th digit
    n=num/10; // remaining digits
 

    d4=num%10; // 4th digit
    n=num/10; // remaining digits
   

     d3=num%10; // 3rd digit
     n=num/10; // remaining digits
   

     d2=num%10; // 2nd digit
    n=num/10; // remaining digits
    
    d1=num%10; // 5th digit

    sum=d1+d2+d3+d4+d5; 
   

    printf("Sum 0f 5 digit number %d = %d", num,sum);
    return 0;

}