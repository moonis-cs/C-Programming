#include<stdio.h>
int fib(int);
int main()
{
    int limit,count;
    printf("\nEnter the no of terms of fibonacci series to be printed : ");
    scanf("%d", &limit);

    for(count=1; count<=limit;count++)
    {
        printf("\n%d. %d\n", count, fib(count));
    }
    return 0;

}
int fib(int num)
{
    if(num==1)
    return 0;

    else if (num==2 || num==3)
    return 1;

    else
    return(fib(num-1) + fib(num-2)); // eg, for 5th term .. fib(5-1) + fib(5-2)   => { fib(4) } + fib(3)   =>  { fib(4-1) + fib(4-2) } + 1   => { fib(3) + fib(2) }+ 1 => 1 + 1 + 1  ==> 3

}