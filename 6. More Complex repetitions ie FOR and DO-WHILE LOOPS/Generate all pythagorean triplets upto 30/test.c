// Generate all pythagorean triplets upto 30
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=30;i++)
    {
        for(j=1;j<=30;j++)
        {
            for(k=1;k<=30;k++)
            
            if(i*i + j*j == k*k)
            printf("\n (%d)^2 + (%d)^2 = %d", i,j,k);

        }
    }
    return 0;
}