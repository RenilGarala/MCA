#include <stdio.h>

int factorial(int number){
    int fact = 1;
    if(number == 1 || number == 0){
        return 1;
    } else {
        return number*factorial(number-1);
    }
}

int main(){
    int number, result;

    printf("Enter number to get factorial");
    scanf("%d", &number);

    result = factorial(number);
    printf("result %d", result);
    return 0;
}