// interchanging the contents of two variables using third variable as a temporary store
#include<stdio.h>
int main()
{
    int c,d,e;

    printf("\nEnter the number at location c : ");
    scanf("%d", &c);

    printf("\nEnter the number at location d : ");
    scanf("%d", &d);

    e=c; // using third variable e as a temporary store
    c=d;
    d=e;

    printf("\nNew value stored at location c : %d", c);
    printf("\nNew value stored at location d : %d", d);
    return 0;
}