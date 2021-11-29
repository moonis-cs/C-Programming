#include<stdio.h>
int main()
{
    int i=2;

    switch (i)
    {
    case 1:
        printf("\nI am in case 1");
        break;
        
        case 2:
        printf("\nI am in case 2");
        break;

        case 3:
        printf("\nI am in case 3");
        break;
    
    default:
    printf("\nI am in default");
        break;
    }
    return 0;
}