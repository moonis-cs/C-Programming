#include<stdio.h>
#include<math.h>

void stats(int *, int *, double *);
int main()
{
    int sum,avg;
    double stdev; // standard deviation and its formulaa is stdev = sqrt(n-avg)^2 + .../n-1

    stats(&sum,&avg,&stdev); // function call by reference
    printf("\nsum=%d \n average=%d \n standard deviation=%f\n", sum,avg,stdev);
    return 0;

}
void stats(int *sum, int *avg, double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("\nEnter the 5 numbers : ");
    scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);

    *sum= n1+n2+n3+n4+n5;  // calculate sum
    *avg=*sum/5;    // calculate avg

    //calculate standard deviation

    *stdev= sqrt( ( pow((n1-*avg),2.0) + pow((n2-*avg),2.0) + pow((n3-*avg),2.0) + pow((n4-*avg),2.0) + pow((n5-*avg),2.0) )/4 );

}