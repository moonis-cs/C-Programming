#include<stdio.h>
int sum(int);
int main()
{
    int count;
    printf("\nEnter the positive number : ");
    scanf("%d", &count);

    printf("Sum of first %d natural numbers is %d\n", count,sum(count));
    return 0;
}
int sum(int num)
{
    if (num)
    return(num+sum(num-1));
    else
    return 0;
    
}

/*   
Example:

Lets assume user has input num value as 5.
Recursive Call sum(num – 1)

num	  Calling Function	Returned Value
5	      sum(5)	
5	      sum(4)	10
4	      sum(3)	6
3	      sum(2)	3
2	      sum(1)	1
1	      sum(0)	0
0	     return 0


Value Returning – Control Shifting back.

num+sum(num-1)    Return Value	    Result
1 + sum(0)	            0	       1 + 0 = 1
2 + sum(1)       	    1	       2 + 1 = 3
3 + sum(2)	            3	       3 + 3 = 6
4 + sum(3)	            6	       4 + 6 = 10
5 + sum(4)	            10	       5 + 10 = 15

Finally, after completing the recursive calls and once num is equal to zero, sum() will return 15 to main() */

i.e., 1 + 2 + 3 + 4 + 5 = 15.