#include<stdio.h>

int main(){
    int a, b;
    printf("enter A and B = ");
    scanf("%d", &a);
    scanf("%d", &b);

    (a > b) ? printf("A is bigger then B") : printf("B is bigger then A");
    return 0;
}