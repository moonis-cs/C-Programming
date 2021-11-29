#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any one of the alphabets a,b or c:");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a' :
        case 'A' :
        printf("\na as in ashar");
        break;
        case 'b' :
        case 'B' : 
        printf("\nb as in ashar");
        break;

        case 'c' :
        case 'C' :
        printf("\nc as in ashar");
        break;
        default:
        printf("\nWish you knew what are alphabets");
        return 0;
    }

}