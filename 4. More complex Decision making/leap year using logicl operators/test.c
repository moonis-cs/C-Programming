// checking whether the year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter the year : ");
    scanf("%d", &year);

    if(year%400==0 || year%100!=0 && year%4==0)
    printf("Leap yaer");
    else
    printf("Not a leap year");
    return 0;
}