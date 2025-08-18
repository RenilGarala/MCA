#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a , b;

    printf("Enter number a and b = ");
    scanf("%d", &a);
    scanf("%d", &b);

    int answer = sum(a, b);

    printf("answer = %d", answer);
    return 0;
}