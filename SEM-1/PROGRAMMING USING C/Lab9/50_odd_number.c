#include<stdio.h>

void display_50_odd_number(){
    int i=1;
    int length_of_row=0;
    while (i<=50){
        if(i%2!=0){
            length_of_row++;
            if(i<10){
                printf("0%d ", i);
            } else{
                printf("%d ", i);
            }
        }
        if(length_of_row == 5){
            length_of_row = 0;
            printf("\n");
        }
        i++;
    }
}

int main(){
    display_50_odd_number();
    return 0;
}