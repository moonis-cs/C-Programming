#include<stdio.h>

void fun(int);
int main()
{
    int a=30; // a is actual argument
    fun(a); 
    printf("%d\n",a);
    return 0;
}

void fun( int b) 
{
    b=60; // formal argument
    printf("%d\n", b);

}