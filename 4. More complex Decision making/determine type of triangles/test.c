//Determine the types of Triangle
#include<stdio.h>
int main()
{
    int s1,s2,s3,a,b,c;

    printf("\nEnter the sides of traingle : ");
    scanf("%d %d %d", &s1,&s2,&s3);

    if(s1!=s2 && s2!=s3 && s3!=s1)
    printf("\nScalene triangle");

    if((s1==s2) && (s2!=s3))
    printf("\nIsoceles triangle");

    if((s2==s3) && (s3!=s1))
    printf("\nIsosceles triangle");

    if((s1==s3) && (s3!=s2))
    printf("\nIsoscles triangle");

    if(s1==s2&&s2==s3)
    printf("\nEquilateral triangle");

    a=(s1*s1)==(s2*s2)+(s3*s3);
    b=(s2*s2)==(s1*s1)+(s3*s3);
    c=(s3*s3)==(s2*s2)+(s1*s1);

    if(a||b||c)
    printf("\nRight angled traingle");
    return 0;
}