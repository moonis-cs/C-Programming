//Finding the range of set of numbers i.e big no-small n0.

#include<stdio.h>
#include<stdlib.h> // this we used for abs()

int main()
{
    int small,big,num,limit,range; // limit here is length or size of numbers
    printf("\nEnter the limit : ");
    scanf("%d", &limit);

    printf("\nEnter %d number:\n ", limit); // by this way we get numbers in limit
    scanf("%d", &num);

    small=big=num;
    limit=limit-1;
    while(limit)
    {
        scanf("%d", &num);

        if(num>big)
        {
            big=num;
        }
        if(num<small)
        {
            small=num;
        }
        limit--;
    }
range=big-small;
printf("\nSmall number=%d \t Big number=%d", small,big);
printf("\nRange=%d", abs(range));
return 0;
}