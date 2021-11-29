#include<stdio.h> // i am taking 4 disks 
void towers(int,char,char,char);  // int = no of disks , char 1 = Source , char 2= destination , char 3= auxillary i.e with help of

void main()
{
    int num;
    printf("\nEnter the number of disks : ");
    scanf("%d", &num);

    printf("\nThe sequence of moves involved in the tower of hanoi are:\n");

    towers(num,'A','C','B');  // A is source .. C is destination .. B is auxillary .. ie moving disk from source A to destination C with help of B

}
void towers(int num,char sourcepeg,char destinationpeg,char auxpeg) // Moving disk from source to destination using auxpeg
     //          disk  ,    'A'    ,      'C'         ,    'B'

{
    if(num==1)  // if only 1 disk is there

    {
        printf("\nMoving the disk 1 from peg %c to peg %c",sourcepeg,destinationpeg);
        return;
    }

    towers(num-1,sourcepeg,auxpeg,destinationpeg); // n-1 => 4-1=3 so moving the top 3 disks to auxillary ie B peg // recursive call // here num-1 is disks , moving the disk from source to auxpeg with help of destinationpeg


    printf("\nMoving the disk %d from peg %c to peg %c", num,sourcepeg,destinationpeg); // now moving last disk ie 4th from A source to C destination

    towers(num-1,auxpeg,destinationpeg,sourcepeg);  // atlast moving the remaining 3 disks from aux to desctination C peg    // moving the disks from auxpeg to destination with help of source

}