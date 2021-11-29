// Compute the value of one number raised to another
#include<stdio.h>
int main()
{
    int x,power;
    int y,i;

    printf("\nEnter the two number : ");
    scanf("%d %d", &x,&y);

    i=power=1;
    while(i<=y)
    {
        power=power*i;
        i++;
    }
    printf("%d raised to power %d = %d", x,y,power);
    return 0;
}