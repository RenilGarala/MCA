// write a program accpet number from the user till there sum exceeds 50.

#include<stdio.h>

void accpet_number(){
    int n;
    int sum = 0;
    while(1){
        printf("Enter number more number (current sum is %d) = ", sum);
        scanf("%d", &n);
        sum = sum + n;
        if(sum > 50){
            break;
        }
    }

    printf("Your sum is %d", sum);
}

int main(){
    int n;

    accpet_number();

    return 0;
}