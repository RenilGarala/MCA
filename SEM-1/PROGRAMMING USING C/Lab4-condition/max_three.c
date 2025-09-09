#include<stdio.h>

void max_number(int a, int b, int c){
    if(a > b){
        if(a > c){
            printf("A is greter");
        }
        else{
            printf("C is greter");
        }
    }
    else{
        if(b > c){
            printf("B is greter");
        }
        else{
            printf("C is greter");
        }
    }
}

int main(){
    int a,b,c;
    printf("enter A = ");
    scanf("%d", &a);
    printf("enter B = ");
    scanf("%d", &b);
    printf("enter C = ");
    scanf("%d", &b);

    max_number(a,b,c);
    return 0;
}