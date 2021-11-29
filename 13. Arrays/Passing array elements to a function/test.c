// Demonstration of call by value and call by reference
#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
    int i;
    int marks[]={55,66,75,56,78,78,90};
    for(i=0;i<=6;i++)
    display1(marks[i]);

    for (i=0;i<=6;i++)
    display2(&marks[i]);

    return 0;
}

void display1(int m) // passing value of an array element
{
    printf("%d ",m);
}
void display2(int *n) // passing address of an array element
{
    printf("%d ",*n);
}