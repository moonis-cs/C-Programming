// function that returns average and percentage of marks.
// call the function from main() and print results in main()

#include<stdio.h>
void result(int,int,int,float *,float *);
int main()
{
    int m1,m2,m3;
    float per,avg;

    printf("\nEnter the marks obtained in three subjects : ");
    scanf("%d %d %d", &m1,&m2,&m3);

    result(m1,m2,m3,&per,&avg);
    printf("\nAverage=%f \n Percentage=%f", avg,per);
    return 0;
}
void result(int m1,int m2,int m3,float *p,float *a)
{
    *p=*a=(m1+m2+m3)/3.0;

}