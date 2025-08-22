#include<stdio.h>

void reverce_number(long number){
    while(number != 0){
        printf("%ld", number%10);
        number = number / 10;
    }
}
int main(){
    long number;
    
    printf("enter number");
    scanf("%ld", &number);

    reverce_number(number);
    return 0;
}
