#include<stdio.h>

#define ISUPPER(x) (x >=65 && x<=90? 1:0)
#define ISLOWER(x) (x >=97 && x<=122? 1:0 )
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y) (x>y?x:y)

int main()
{
    char ch;
    int big,a,b;

    printf("\nEnter any character/alphabet : ");
    scanf("%c", &ch);

    if(ISUPPER(ch)==1)
    printf("You entered an Upper case letter\n");
    if(ISLOWER(ch)==1)
    printf("You entered a lowercase letter\n");
    if(ISALPHA(ch)!=1)
    printf("You entered a character other than an alphabet\n");

    printf("Enter two number :");
    scanf("%d%d", &a,&b);

    big=BIG(a,b);
    printf("\nThe bigger number is : %d", big);
    return 0;

}