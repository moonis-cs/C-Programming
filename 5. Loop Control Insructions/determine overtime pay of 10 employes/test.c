// Determine the overtime pay of 10 employes
#include<stdio.h>
int main()
{
    float otpay;
    int hours,i=1;
    while(i<=10) //Loop for 10 employes
    {
        printf("\nEnter the no. of hours worked by the 10 employes : ");
        scanf("%d", &hours);
        if(hours>=40)
        otpay= (hours-40)*12;
        else
        otpay=0;
        printf("\nno of hours worked= %d \t overtime pay=Rs.%.2f", hours,otpay);
        i++;
    }
    return 0;
}