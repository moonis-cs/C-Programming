// Determine the greatest of 3 numbers using conditional operators
#include<stdio.h>

int main()
{
    int n1,n2,n3,great;

    printf("\nEnter the three numbers :");
    scanf("%d %d %d", &n1,&n2,&n3);

    great= n1>n2? (n1>n3?n1:n3) : (n2>n3?n2:n3);
    printf("\nThe greatest number =%d", great);

    return 0;
}