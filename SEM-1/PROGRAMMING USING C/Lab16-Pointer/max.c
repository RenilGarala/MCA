//max value from x number using pointer
#include<stdio.h>

int *max(int *a, int *b, int *c){
    if(*a > *b){
        if(*a > *c){
            return a;
        } else{
            return c;
        }
    } else{
        if(*b > *c){
            return b;
        } else {
            return c;
        }
    }
}

int main(){
    int a=10, b=20, c=30;
    int *result = max(&a, &b, &c);

    printf("Max number is %d", *result);
    return 0;
}