#include<stdio.h>
void pfactors(int,int);
int main()
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);

    printf("Prime factors of %d are :\n", num);

    pfactors(num,2); // 2 is the smallest prime number
    return 0;

}
void pfactors(int number, int count)
{
    if(number<=1)
    return; // this will only return control  not any value

    else if(number%count==0)
    {
        printf("%d\n", count);
        pfactors(number/count,count);
    }
    else{
        pfactors(number,count+1);
    }
}