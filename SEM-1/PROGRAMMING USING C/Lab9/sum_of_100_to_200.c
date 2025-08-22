#include<stdio.h>

void sum_of_100_to_200(){
    int i = 100;
    int sum = 0;
    while(i<=200){
        if(i%7==0){
            printf("%d \n", i);
            sum += i;
        }
        i++;
    }
    printf("Sum of all number which divide by 7 is = %d", sum);
}

int main(){
    sum_of_100_to_200();
    return 0;
}