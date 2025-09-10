#include <stdio.h>
int main(){
    int a=10;
    int b=10;
    int *ptr1, *ptr2;
    ptr1 = &a; 
    //&a is return address of a 
    ptr2 = &b;
    printf("Addition of two number using pointer is = %d\n", *ptr1 + *ptr2); 
    // using *ptr1 you can get value of stored address (value of a-10)
    return 0;
}