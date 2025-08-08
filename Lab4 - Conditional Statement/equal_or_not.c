#include<stdio.h>

void equal_or_not(int a, int b){
    if(a==b){
        printf("A and B both are equal");
    } else {
        printf("A and B both are not equal");
    }
}

int main(){
    int a,b;
    printf("enter A and B = ");
    scanf("%d", &a);
    scanf("%d", &b);

    equal_or_not(a,b);
    return 0;
}