//Finding absolute(positive value) value of a number

#include<stdio.h>
int main()
{
    int no;
    printf("\nEnter the number : ");
    scanf("%d", &no);

    if(no<0)
    no=no*-1;
    printf("\nThe absolute of a number =%d", no);
    return 0;
}