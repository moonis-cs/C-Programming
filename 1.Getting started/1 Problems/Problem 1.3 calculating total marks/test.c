// Calculation of Total marks and Percentage obtained in 5 subjects

#include<stdio.h>
#include<stdlib.h>

int main()
{ int s1,s2,s3,s4,s5,t;
  float per;

  printf("\nEnter the marks of 5 subjects : ");
  scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

  t=s1+s2+s3+s4+s5;
  per=t/5;

  printf("total marks=%d\n", t);
  printf("percentage =%f\n", per);

  return 0;



}
