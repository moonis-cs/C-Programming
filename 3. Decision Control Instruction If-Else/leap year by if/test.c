//check whether a year is leap or not

#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter the year : ");
    scanf("%d", &year);
    
    if(year%100==0)
    {
        if(year%400==0)
        printf("\nLeap Year");
        else 
        printf("\nNot a leap year");

    }
    else
    {
         if(year%4==0)
         printf("\nLeap Year");

         else
         printf("\nNot a leap year");


    }
 return 0;
}