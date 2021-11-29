// menu driven program
#include<stdio.h>
#include<stdlib.h> // for exit()

int main()
{
    int num,fact,i,choice;

    while(1)
    {
    printf("\n1. Finding the factorial :\n");
    printf("2. Finding the prime number :\n");
    printf("3. Finding the odd-even :\n");
    printf("4. Exit!!\n");
    printf("\nEnter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

    printf("\nEnter the number : ");
    scanf("%d",&num);

    fact=1;
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("factorial of %d is %d", num,fact);

        break;

        case 2:

        printf("\nEnter the number : ");
        scanf("%d", &num);

        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
            printf("\nThe number is not prime\n");
            break;
            }
        }
        if(i==num)
        printf("prime number ! \n");
        break;

        case 3 :
        printf("\nEnter the number : ");
        scanf("%d", &num);

        if(num%2==0)
        printf("Even num ! \n");
        else
        printf("Odd no ! \n");
        break;

        case 4 :
        exit(0); // terminates the program

    default:

    printf("\nWrong choice pal ! try again ;) ");
        break;

    }

    }
    return 0;
}