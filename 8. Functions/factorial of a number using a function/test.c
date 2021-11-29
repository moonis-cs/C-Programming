#include<stdio.h>

int factorial(int);
int main()
{
    int num,fact;
    printf("\nEnter the number : ");
    scanf("%d", &num);

    fact=factorial(num);
    printf("factorial of %d = %d\n", num,fact);
    return 0;
}
int factorial(int num)
{
    int i;
    int factorial=1;

    for(i=1;i<=num;i++)
    factorial=factorial*i;
    return(factorial);

}