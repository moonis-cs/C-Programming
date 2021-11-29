#include<stdio.h>
int power(int,int);
int main()
{
    int x,y,pow;
    printf("\nEnter the number : ");
    scanf("%d %d", &x,&y);
    pow=power(x,y);
    printf("%d to the power %d = %d", x,y,pow);
    return 0;

}
int power(int x, int y)
{
    int i;
    int p=1;
    for(i=1;i<=y;i++)
    p=p*x;
    return (p);
}