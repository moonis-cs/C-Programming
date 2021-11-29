#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("\nEnter the number whose factorial you want : ");
    scanf("%d", &num);

    printf("factorial of %d is %d", num,factorial(num));
    return 0;
}
int factorial(int number)
{
    if(number==1 || number==0) // factorial of 0  and 1 = 1
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}