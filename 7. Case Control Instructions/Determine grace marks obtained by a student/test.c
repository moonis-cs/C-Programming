// c here is class i.e grades and sub = subjects

#include<stdio.h>

int main()
{
    int c,sub;

    printf("\nEnter the class and no. of subjects failed : ");
    scanf("%d %d",&c,&sub);

    switch (c)
    {
    case 1: // first class
        if(sub<=3)
        printf("Students gets a total of %d grace marks\n", 5*sub);

        else
        printf("No grace marks\n");

        break;
        
        case 2 :

         if(sub<=2)
        printf("Students gets a total of %d grace marks\n", 4*sub);

        else
        printf("No grace marks\n");

        break;
    
    case 3 :

     if(sub<=3)
        printf("Students gets a total of 5 grace marks\n");

        else
        printf("No grace marks\n");

        break;

    default:
    printf("wrong class entered\n");
        break;
    }
    return 0;
}