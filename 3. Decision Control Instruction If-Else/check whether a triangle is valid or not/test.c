// checking whether a triangle is valid or not
#include<stdio.h>
int main()
{
 int angle1,angle2,angle3;
 printf("\nEnter the angles of a traingle : ");
 scanf("%d %d %d", &angle1,&angle2,&angle3);

 if ((angle1+angle2+angle3)==180)
 printf("\nValid angle");
 else 
 printf("\nInvalid angle");
 return 0;
}