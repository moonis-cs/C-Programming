// Circular shift of variables to right
// we need to shift value from x to y .. y to z and z to x // imagine cloclwise circle x>y>z
#include<stdio.h>
 void shift(int*,int*,int*);
 int main()
 {
     int x,y,z;

     printf("\nEnter the three varaibles : ");
     scanf("%d %d %d", &x,&y,&z);

     printf("\nBefore shifting : \n x=%d \t y=%d \t z=%d", x,y,z);

     shift(&x,&y,&z);

     printf("\nAfter shifting : \n x=%d \t y=%d \t z=%d", x,y,z);
     return 0;
 }
 void shift(int *a, int *b, int *c)
 {
     int t;
     t=*c;
     *c=*b;
     *b=*a;
     *a=t;

 }