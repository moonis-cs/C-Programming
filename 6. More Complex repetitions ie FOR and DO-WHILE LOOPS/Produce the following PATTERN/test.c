// Produce the following pattern
   /*  1
       2  3
     4  5   6
    7  8   9   10 */


 #include<stdio.h>
 int main()
 {
     int num=4,row,col,space,count=1; // num =4 i.e rows are 4  // also note that no of elemets in row = no of elements in column

     for(row=1;row<=num;row++)
     {
         for(space=1;space<=(num-row); space++)
         {
             printf(" ");
         }
         for(col=1;col<=row;col++)
         {
             printf(" %d ", count++);

         }
         printf("\n");
     }
     return 0;
 }