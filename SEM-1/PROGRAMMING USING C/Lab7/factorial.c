#include<stdio.h>

void factorial(int n){
    int i = n;
    int fact = 1;
    while(i >= 1){
        fact *= i;
        i--;
    }
    printf("Factorial is = %d\n", fact);
}

int main(){
    int n;

    printf("Enter N number to get fatorial = ");
    scanf("%d", &n);

    factorial(n);
    return 0;
}