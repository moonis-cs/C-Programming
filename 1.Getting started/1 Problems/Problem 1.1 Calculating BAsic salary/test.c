// calculating basic salary of a worker

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float bp,da, hra , grpay; // bp = basic pay , da= dearance allowance , hra= house rent allowance , grPay= gross pay
    printf("\nEnter the Basic pay : ");
    scanf("%f", &bp);

    da= 0.4*bp;
    hra=0.2*bp;

    grpay=bp+da+hra;

    printf("basic salary = %f\n",bp );
    printf("dearness allowance = %f\n",da);
    printf("gross pay=%f\n", grpay);
    return 0;


}
