#include<stdio.h>

void multiplication(int n){
    int i = 1;
    while(i<=10){
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }
}
int main(){
    int n;

    printf("Enter number for multiplication = ");
    scanf("%d", &n);

    multiplication(n);
    return 0;
}