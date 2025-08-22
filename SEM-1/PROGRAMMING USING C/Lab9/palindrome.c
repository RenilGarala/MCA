#include<stdio.h>
#include<string.h>

void reverce_number(int number){

    int reverce = 0, original = number;
    
    while(number > 0){
        int degit = number % 10;
        reverce = reverce * 10 + degit;
        number /= 10;
    }
     if(original == reverce){
        printf("Number is palindrome");
    } else{
        printf("Number is not palindrome");
    }
}
int main(){
    int number;
    
    printf("enter number");
    scanf("%d", &number);

    reverce_number(number);
    return 0;
}
