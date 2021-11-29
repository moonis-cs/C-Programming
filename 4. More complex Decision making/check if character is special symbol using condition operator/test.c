// checking if a character is a special character or not
#include<stdio.h>

int main()
{
    char ch;
    printf("\nEnter the character : ");
    scanf("%c", &ch);

    ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<= 96) || (ch>=123 && ch<=127)) ? printf("\nSpecial symbol") : printf("\nNot a special symbol");
    return 0;
}