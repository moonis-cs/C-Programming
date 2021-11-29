#include<stdio.h>

int main()
{
    float fr,cent; // fahreheit and centigrade

    printf("\nEnter the temperature (F) :");
    scanf("%f", &fr);

    cent=5.0/9.0* (fr-32); // formulla for convrsion of fahrenheit to centigrade

    printf("temp in centigrade=%f Degree celcius\n", cent);

    return 0;
}
