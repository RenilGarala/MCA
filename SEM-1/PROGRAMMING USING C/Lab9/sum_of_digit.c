#include<stdio.h>

void sum_of_digit(long number){
    int sum = 0;
    while(number != 0){     
        sum += number % 10;
        number = number / 10;
    }
    printf("sum = %d", sum);
}

int main(){
    long number;

    printf("Enter Number");
    scanf("%ld", &number);

    sum_of_digit(number);
    return 0;
}