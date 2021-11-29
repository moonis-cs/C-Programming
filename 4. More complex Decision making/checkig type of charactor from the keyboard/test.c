// check type of character entered from the keyboard
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character : ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90) // A-Z uppercase ASCII value is 65-90
    printf("\nThe character is an uppercase letter");

    if(ch>=97 && ch<=122) //a-z lowercase ASCII value is 97-122
    printf("\nThe character is lower case letter");

    if(ch>=48 && ch<=57) // ASCII valoe of digits 0-9 is 48-57
    printf("\nThe character is a digit");

    if(ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
    printf("\nThe character is a special symbol"); // ASCII value of special symbols

    return 0;
}