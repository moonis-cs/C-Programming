// finding the factorial of a number using while loop
#include<stdio.h>
int main()
{
int num,count,fact;
printf("\nEnter the number : ");
scanf("%d", &num);

count=fact=1;
while(count<=num)
{
    fact=fact*count;
    count++;
}
printf("\nFactorial =%d", fact);
return 0;
}

