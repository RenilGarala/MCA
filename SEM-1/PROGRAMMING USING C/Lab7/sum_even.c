#include<stdio.h>
void sum_of_even(int n){
    int i = 1;
    int sum = 0;
    while(i <= n){
        if(i%2 == 0){
            printf("%d \n", i);
            sum += i;
        }
        i++;
    }
    printf("Sum of even number is %d \n", sum);
}

int main(){
    int n;

    printf("Enter N number to get sum of even number = ");
    scanf("%d", &n);

    sum_of_even(n);

    return 0;
}