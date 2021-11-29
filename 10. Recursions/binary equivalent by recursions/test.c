#include<stdio.h>

int binary(int);
int main()
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);

    printf("\nBinary equivalent of %d is %d\n\n", num, binary(num));
    return 0;

}
int binary(int number)
{
    return ((number==0) ? 0 : number%2 + 10*binary(number/2)); 
}

/*  Recursive Function Logic
Assume that user inputs num value as 14.

num	-  num % 2	-  (num % 2) + 10 * binary(num/2)
14	-  14 % 2	-  (0) + 10 * binary(7)
7	-  7 % 2	-  (1) + 10 * binary(3)
3	-  3 % 2	-  (1) + 10 * binary(1)
1	-  1 % 2	-  (1) + 10 * binary(0)

Value Returning – Control Shifting back

Return Value  -     	       To         -          Result
return 0;	     (1) + 10 * binary(0)	        (1) + 10 * 0 = 1
1	             (1) + 10 * binary(1)       	(1) + 10 * 1 = 11
11      	     (1) + 10 * binary(3)        	(1) + 10 * 11 = 111
111	             (0) + 10 * binary(7)	        (0) + 10 * 111 = 1110

Binary Equivalent of Decimal Number 14 is 1110 */

