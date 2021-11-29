#include<stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i,*j;
    j=&num[0]; // assign address of zeroth element
    for ( i = 0; i <= 5; i++)
    {
        printf("address=%u \t element=%d\n",j,*j);
        j++; // increment pointer to point to next location
    }
    return 0;
    

}