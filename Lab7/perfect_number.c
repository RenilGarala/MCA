#include <stdio.h>

void perfectNumber(int n){
    int temp = n;
    int sum = 0;

    for (int i = temp-1; i >= 1 ; i--){
        if(temp%i==0){
            temp=temp/i;
            sum+=i;
        }
    }

    if(sum == n){
        printf("%d is perfect number",n);
    } else {
        printf("%d is not perfect number", n);
    }
    printf("\n");
}

int main(){
    int n;

    printf("Enter number for perfect number = ");
    scanf("%d", &n);

    perfectNumber(n);

    return 0;
}