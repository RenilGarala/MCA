#include<stdio.h>

void max_number(int a, int b){
    if(a>b){
        printf("A is greter then B ");
    } else if(a<b){
        printf("B is greter then A ");
    } else {
        printf("both are equal ");
    }
}
int main(){
    int a,b;
    printf("enter A = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);

    max_number(a,b);
    return 0;
}