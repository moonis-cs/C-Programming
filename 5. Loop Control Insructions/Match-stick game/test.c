// the match stick game

#include<stdio.h>
int main()
{
    int m=21,u,c;  //u=user pick and c=computers pick
    while(1)
    {
        printf("\n\nNo of matches left : %d", m);
        printf("\nUser: Pick up 1,2,3 or matches : ");
        scanf("%d", &u);

        if(u>4 || u<1)
        continue;

        m=m-u;
        printf("\nNo of matches left : %d", m);

        c=5-u; // we must make sure cpu wins .. so in order to make cpu win cpu need to make the no.of matches 20 before last turn. this way user has no choice but to pick last match to make him loose.. the way to do that is to make sum of both picks 5 each turn. so if person picks up 2 then cpu picks 3 to cmplete sum of 5 per turn. 4*5=20.. by this way 21st match will be picked by user and user will lose!!  

        printf("\nOut of which computer picked :%d", c);

        m=m-c;

        if(m==1)
        {
            printf("\nNo of matches left :%d", m);
            printf("\nYou lost!!");
            break;
        }

    }
    return 0;
    }