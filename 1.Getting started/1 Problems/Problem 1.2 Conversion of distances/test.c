// conversion of distance

#include<stdio.h>
#include<stdlib.h>

int main()
{ float  km,m,cm,ft,inch;

  printf("\nEnter the Distance in KMs :");
  scanf("%f", &km);

  m= km*1000;
  cm= m*100;
  inch=cm/2.54;
  ft=inch/12;

  printf("Distance in meters will be =%f\n", m);
  printf("Distance in centimeter will be =%f\n", cm);
  printf("Distance in feet will be =%f\n", ft);
  printf("Distance in inches will be =%f\n", inch);

  return 0;



}
