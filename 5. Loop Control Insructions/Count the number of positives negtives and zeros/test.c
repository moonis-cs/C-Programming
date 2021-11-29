//Count the no. of positives , negs and zeros
#include<stdio.h>
int main()
{
    int pos,neg,zero,num;
    char ans='y';

    pos=neg=zero=0;
    while(ans=='y'|| ans=='Y')
    { 
         printf("\nEnter the number :");
         scanf("%d", &num);

        if(num==0)
        zero++;
        if(num>0)
        pos++;
        if(num<0)
        neg++;

        fflush(stdin); //clears standard input stream
        printf("\nDo you wanna continue ? ");
        scanf("%c",&ans);

    }
    printf("\nYou Entered %d postive number(s) :", pos);
    printf("\nYou Entered %d negative number(s) :", neg);
    printf("\nYou Entered %d zero number(s) :", zero);
return 0;
}