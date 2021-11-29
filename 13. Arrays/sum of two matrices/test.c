#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("\nEnter the 1st matrix :\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter the 2st matrix :\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe 1st matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe 2nd matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }   
    }
    printf("\nThe sum of two matrices is :\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t", c[i][j]);
        }
        
    }

}