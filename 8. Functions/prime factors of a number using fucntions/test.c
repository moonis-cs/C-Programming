// prime factors of 24 is 2 2 2 and 3

#include<stdio.h>
void primefactors(int num) // since we r calling it before main so we dont need to specify prototype and all
{
    int count;
    for(count=2;num>1;count++) // smallest prime is 2 so we start with it .. 
    {
        while(num%count==0) // eg; 24%2==0 .. 12%2==0 .. 6%2==0 .. 3%2!=0 so while loop will exit and for loop will incrememnt count as 3 now.. 3%3==0 .. at last 1%3!=0.. while loop will exit  but this time for loop has a condtion i.e num>1 but we got 1 so execution will stop
       {
            printf("%d ", count);
            num=num/2;    //  eg; 24/2 = 12 and so it will move on till it comes 6/2=3 and at last when 3/3=1 
      
       }

    }
}

int main()
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    primefactors(num);
    return 0;
}