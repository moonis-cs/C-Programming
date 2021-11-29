// i's address as j's value and j's address as k's value

#include<stdio.h>
int main()
{
    int i=3, *j, **k; // i is an ordinary int .. *j is a pointer to an int and **k is a pointer to an integer pointer
    j=&i;
    k=&j;

    printf("address at i=%u\n", &i);
    printf("address at i=%u\n", j);
    printf("address at i=%u\n", *k);
    printf("address at j=%u\n", &j);
    printf("address at j=%u\n", k);
    printf("address at k=%u\n", &k);


    printf("value at i=%d\n", i);
    printf("value at j=%u\n", j);
    printf("value at k=%u\n", k);

    printf("value at i=%d\n", *(&i));
    printf("value at j=%d\n", *j);
    printf("value at k=%d\n", **k);

    return 0;



}