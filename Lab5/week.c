#include<stdio.h>

void week_day(int number){
    switch(number){
        case 1: 
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid number please enter number between 1 to 7");
    }
}

int main(){
    int number;

    printf("Enter number to get week day = ");
    scanf("%d", &number);

    week_day(number);
    return 0;
}