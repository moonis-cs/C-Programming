// checking if a character is lower case
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character : ");
    scanf("%c", &ch);

    ch>=97 && ch<=122 ? printf("\nLower case") : printf("\nNot a lower case");
    return 0;

}