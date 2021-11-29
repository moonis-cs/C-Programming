// Determine the greatest of 3 numbers using conditional operators
#include<stdio.h>

int main()
{
    int great,n1,n2,n3;

    printf("\nEnter the three integers : ");
    scanf("%d", &n1,&n2,&n3);

    great= n1>n2 ? (n1>n3?n1:n3) : n2>n3?n2:n3;
    printf("\nGreatest interger is %d", great);
    return 0;
}