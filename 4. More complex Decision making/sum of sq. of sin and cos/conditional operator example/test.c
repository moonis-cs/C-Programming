// if sal >=25k and <=40k the manager else if sal >=15k and <=25k then accountant

#include<stdio.h>
int main()
{
    int sal;

printf("\nEnter the salary : ");
scanf("%d", &sal);

(sal>=25000 && sal<=40000 ? printf("\nManager") : (sal>=15000 && sal<= 25000 ? printf("\nAccountant") : printf("\nClerk")));

return 0;

}