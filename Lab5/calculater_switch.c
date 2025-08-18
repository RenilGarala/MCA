#include<stdio.h>

void calculater(int num1, int num2, char operation){
    switch(operation){
        case '+': 
            printf("Answer is = %d", num1 + num2);
            break;
        case '-':
            printf("Answer is = %d", num1 - num2);
            break;
        case '/':
            printf("Answer is = %d", num1 / num2);
            break;
        case '*':
            printf("Answer is = %d", num1 * num2);
            break;
        default:
            printf("Enter Valid Operation");
    }
}

int main(){
    int num1, num2;
    char operation;

    printf("Enter Operation = ");
    scanf("%c", &operation);

    printf("Enter number 1 = ");
    scanf("%d", &num1);

    printf("Enter number 2 = ");
    scanf("%d", &num2);
    printf("\n");
    
    calculater(num1, num2, operation);
    return 0;
}