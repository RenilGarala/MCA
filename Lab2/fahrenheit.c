#include <stdio.h>

void fahrenheit(int c){
    int f = (1.8*c) + 32;
    printf("Fahrenheit is = %d", f);
}

void main(){
    int c;
    printf("Enter Celcious = ");
    scanf("%d", &c);

    fahrenheit(c);
}
