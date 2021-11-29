#include<stdio.h>

void leapyear(int);
int main()
{
    int year;

    printf("\nEnter the year : ");
    scanf("%d", &year);

    leapyear(year); // function call
    return 0;
}
void leapyear(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
    printf("\nLeap year");
    else 
    printf("\nNot a leap year ");
}