#include<stdio.h>

void leap_or_not(int year){
    if(year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
        printf("%d is leap year", year);
    } else {
        printf("%d is not leap year", year);
    }
}

int main(){
    int year;
    printf("Enter Year - ");
    scanf("%d", &year);

    leap_or_not(year);
    return 0;
}