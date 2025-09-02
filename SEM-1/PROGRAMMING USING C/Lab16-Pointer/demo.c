#include <stdio.h>
int main(){
    int a=10;
    int b=10;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Addition of two number using pointer is = %d\n", *ptr1 + *ptr2);
    return 0;
}