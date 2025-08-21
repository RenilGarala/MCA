#include<stdio.h>

void odd_or_even(int a){
    if(a%2==0){
        printf("%d is even", a);
    } else {
        printf("%d is odd", a);
    }
}

int main(){
    int a;
    printf("enter A = ");
    scanf("%d", &a);

    odd_or_even(a);
    return 0;
}