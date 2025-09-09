#include<stdio.h>

int main(){
    int a = 4, b = 3;
    // 8  4  2  1
    // 0  0  1  0
    // 0  1  0  0

    printf("a&b = %d \n", a&b); 
    // and oprater is like multiplication
    // 0  0  =  0
    // 0  1  =  0
    // 1  0  =  0
    // 1  1  =  1

    printf("a|b = %d\n", a|b); 
    // or oprater is - if 1 is exist then ans is 1 
    // 0  0  =  0
    // 0  1  =  1
    // 1  0  =  1
    // 1  1  =  1

    printf("a^b = %d \n", a^b); 
    // xor oprater is - if 1 is exist then ans is 1 
    // 0  0  =  0
    // 0  1  =  1
    // 1  0  =  1
    // 1  1  =  1

    printf("a<<2 = %d \n", a<<2); 
    //left shift operater 
    // a * 2^1
    // a * 2^2
    // a * 2^3

    printf("a>>2 = %d \n", a>>2); 
    //right shift operater 
    // a / 2^1
    // a / 2^2 = 4 / 4 = 1 (ans)
    // a / 2^3
    
    return 0;
}