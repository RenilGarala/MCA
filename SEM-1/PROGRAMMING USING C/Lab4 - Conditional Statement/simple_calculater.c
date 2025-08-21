#include<stdio.h>
void addition(int a, int b){
    int add = a+b;
    printf("Addition is = %d \n", add);
}

void subtraction(int a, int b){
    int sub = a-b;
    printf("Subtraction is = %d \n", sub);
}

void multiplication (int a, int b){
    int mul = a*b;
    printf("Multiplication is = %d \n", mul);
}

void division(int a, int b){
    int div = a/b;
    printf("division is = %d \n", div);
}

int main(){
    int a,b;
    char ch;
    printf("enter ch = ");
    scanf("%c", &ch);
    printf("enter A = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);

    if(ch == '+'){
        addition(a,b);
    } 
    else if (ch == '-'){
        subtraction(a,b);
    }
    else if (ch == '*'){
        multiplication(a,b);
    }
    else if (ch == '/'){
        division(a,b);
    }
    else{
        printf("Invalid charecter");
    }
}