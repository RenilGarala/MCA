#include<stdio.h>
int main(){
    int number;

    printf("Enter 4 digit number = ");
    scanf("%d", &number);

    int n = 1000;

    while(number != 0){
        int remaing = number / n;
        int last_char = remaing%10;
        if(last_char == 1){
            printf("One ");
        } else if(last_char == 2){
            printf("Two ");
        } else if(last_char == 3){
            printf("Three ");
        } else if(last_char == 4){
            printf("Four ");
        } else if(last_char == 5){
            printf("Five ");
        } else if(last_char == 6){
            printf("Six ");
        } else if(last_char == 7){
            printf("Seven ");
        } else if(last_char == 8){
            printf("Eight ");
        } else if(last_char == 9){
            printf("Nine ");
        } else if(last_char == 0){
            printf("Zero ");
        }

        remaing = remaing / 10;
        n = n / 10;
        if(n==0){
            break;
        }
    }
    return 0;
}