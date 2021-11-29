#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("\nEnter the 5 number : ");
    scanf("%d", &num);

    printf("Sum of its digits will be : %d", sum(num));
    return 0;
}
int sum(int number)
{
    int remainder;

    if(number!=0)
    {
        remainder=number%10;
        return(remainder+sum(number/10));

    }
    else
    {
        return 0;
    }
}