#include<stdio.h>

int addition(){
    int a,b;
    printf("Enter value A = ");
    scanf("%d", &a);
    printf("Enter value B = ");
    scanf("%d", &b);
    int sum = a+b;
    printf("Addition is = %d \n", sum);

    return 0;
}

void subtraction(int a, int b){
    int sub = a-b;
    printf("Subtraction is = %d \n", sub);
}

void multiplication(int a, int b){
    int mul = a*b;
    printf("Multiplication is = %d \n", mul);
}

void division(int a, int b){
    int div = a/b;
    printf("division is = %d \n", div);
}

int main(){
    int a,b;
    addition();

    printf("Enter value A = ");
    scanf("%d", &a);
    printf("Enter value B = ");
    scanf("%d", &b);

    subtraction(a,b);
    multiplication(a,b);
    division(a,b);

    return 0;
}