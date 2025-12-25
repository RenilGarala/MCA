#include<stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int c;
    int length;
    printf("Enter Length");
    scanf("%d",&length);

    printf("Fibonaci series - %d, %d, ", a, b);
    for(int i = 3; i <= length; i++){
        c=a+b;
        printf("%d, ", c);
        a=b;
        b=c;
    }
}