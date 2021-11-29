// checking whether a year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf ("\nEnter the year : ");
    scanf("%d", &year);

    year%100==0 ? (year%400==0 ? printf("\nLeap year") : printf("\nNot a leap year") ) : (year%4==0? printf("\nLeap year") : printf("\nNot a leap year") ) ;

    return 0;
}