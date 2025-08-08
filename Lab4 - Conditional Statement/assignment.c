#include <stdio.h>

int main()
{
    int a = 10;
    int p;

    // ----Pre and post increment 
    // p = a++;
    // p = ++a;

    // ----Pre and post decrement
    // p = --a;
    p = a--;
    printf("P = %d \n", p);
    printf("A = %d \n", a);
    return 0;
}