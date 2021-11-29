#include<stdio.h>

void italy();
void brazil();
void argentina();
int main()
{
    printf("\nI am in main");
    italy();
    brazil();
    argentina();
    return 0;
}
void italy()
{
    printf("\nI am in Italy");
}

void brazil()
{
    printf("\nI am in brazil");
}
void argentina()
{
    printf("\nI am in argentina");
}