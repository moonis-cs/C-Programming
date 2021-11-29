// Print hours of the day in AM,PM,NOON and midnight
#include<stdio.h>
int main()
    {
        int hour;

        for(hour=0;hour<=23;hour++)
        {
            if(hour==0)
            {
            printf("12 MID-NIGHT\n");
            continue;
            }

            if(hour<12)
            printf("%d AM\n", hour);

            if(hour==12)
            printf("12 Noon\n");

            if(hour>12)
            printf("%d PM\n", hour%12); // hour%12 e.g; 13%12=1 PM and so on...

        }
        return 0;
    }