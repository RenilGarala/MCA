#include<stdio.h>

void series(int n){
    int i = 1;
    int series_number = 12;
    while(i<=n){
        printf(" %d, ", series_number+10);
        series_number += 10;
        i++;
    }
}

int main(){
    int n;

    printf("Enter number for series = ");
    scanf("%d", &n);

    series(n);
    return 0;
}