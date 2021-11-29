#include<stdio.h>
int main()
{
    int avg,sum=0;
    int i;
    int marks[30]; // array decleration
    for(i=0;i<=29;i++)
    {
        printf("\nEnter the marks : ");
        scanf("%d",&marks[i]); // stores data in array
    }
    for(i=0;i<=29;i++)
    sum=sum+marks[i]; // reads data from an array
    avg=sum/30;
    printf("\nAverage marks=%d\n",avg);
    return 0;
}