#include<stdio.h>
int main(){
    int a = 10;
    float b = 20;
    // char name = "renil";
    long address = 1000;
    // short pincode = "360";

    printf("%lu \n", sizeof(a));
    printf("%lu \n", sizeof(b));
    printf("%lu \n", sizeof(address));
    return 0;
}