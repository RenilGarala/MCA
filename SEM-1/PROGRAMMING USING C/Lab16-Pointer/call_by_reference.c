#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=10, b=20;
    printf("Before swaping %d %d\n", a,b);
    swap(&a,&b);
    printf("after swaping %d %d", a,b);
    return 0;
}