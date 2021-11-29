// Finding youngest among the three 
#include<stdio.h>
int main()
{
    int m,as,ad,young;
    printf("\nEnter the age of Moonis , Aasim and Aadil respectively : ");
    scanf("%d %d %d", &m,&as,&ad);

    if(m<as)
    {
        if(m<ad)
        young=m;
        else
        young=ad;
    }
    else
    {
        if(as<ad)
        young=as;
        else
        young=ad;
    }
    printf("\nThe youngest of Moonis(%d),Aasim(%d) and Aadil(%d) is %d", m,as,ad,young);
    return 0;
}