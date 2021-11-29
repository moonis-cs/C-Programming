// in call by reference the address of actual  arguments in the call are copied into formal arguments of the called function

#include<stdio.h>
void swapr(int *,int *);
int main()
{
    int a=20, b=10;
    swapr(&a,&b);

    printf("\n a=%d \t b=%d", a,b);
    return 0;

}
void swapr(int *x, int *y)
{
    int t;

    t=*x;
    *x=*y;
    *y=t;
}