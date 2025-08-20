#include <stdio.h>

void series(int n){
    for (int i = 1; i <= n ; i++){
        printf(" 1/%d + ", i*i);
    }
    printf("\n");
}

int main(){
    int n;

    printf("Enter number for series = ");
    scanf("%d", &n);

    series(n);

    return 0;
}