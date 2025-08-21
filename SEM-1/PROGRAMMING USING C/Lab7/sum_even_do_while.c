#include <stdio.h>

void sum_even_while(int n){
    int i = 1;
    int sum = 0;
    while(i <= n){
        if(i%2 == 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of even number is %d (using while looop)\n", sum);
}

void sum_even_do_while(int n){
    int i = 1;
    int sum = 0;
    do{
        if(i%2 == 0){
            sum += i;
        }
        i++;
    }while(i<=n);
    printf("Sum of even number is %d (using do while loop)\n", sum);
}

int main(){

    int n;
    printf("Enter n number = ");
    scanf("%d", &n);

    sum_even_while(n);
    sum_even_do_while(n);
    return 0;
}