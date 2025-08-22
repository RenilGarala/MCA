#include<stdio.h>

void prime_or_not(int number){
    int temp = 0;
    int a=number/2;
    for(int i = 2; i < a; i++){
        if(number%i == 0){
            temp=1;
            break;
        }
    }
    if(temp == 0){
        printf("number is prime");
    } else {
        printf("number is not prime");
    }
}
int main(){
    int number;
    
    printf("enter number to get prime number = ");
    scanf("%d", &number);

    prime_or_not(number);
    return 0;
}
