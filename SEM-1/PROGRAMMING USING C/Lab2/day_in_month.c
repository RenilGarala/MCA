#include<stdio.h>

void dayToMonth(int day){
    int  month, remainingday;
    month = day/30;
    remainingday = day%30;

    printf("Total month is %d and days is %d ", month, remainingday);
}

int main(){
    int day;
    printf("Enter Days = ");
    scanf("%d", &day);

    dayToMonth(day);
    return 0;
}

