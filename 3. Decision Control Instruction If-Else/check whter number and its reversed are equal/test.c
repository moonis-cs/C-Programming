//check whether the number and its reverse are equal or not
#include<stdio.h>
int main()
{
    int n,d5,d4,d3,d2,d1,num;
    long int revnum=0;

    printf("\nEnter the number : ");
    scanf("%d", &n);
    num=n;

    d5=n%10;
    n=n/10;

    d4=n%10;
    n=n/10;

    d3=n%10;
    n=n/10;

    d2=n%10;
    n=n/10;

    d1=n%10;
    
    revnum=d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("\nReversed number = %ld", revnum);

    if(revnum==num)
    printf("\nGiven number and its reversed are equal");
    else
    printf("\nGiven number and its reversed are not equal");

    return 0;   

}