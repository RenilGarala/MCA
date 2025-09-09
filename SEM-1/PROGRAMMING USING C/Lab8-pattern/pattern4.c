#include<stdio.h>

void pattern(int lenght){
    for (int i = 1; i <= lenght; i++){

        for (int j = lenght-i; j >= 1; j--){
            printf(" ");
        }

        for (int k = 1; k <= i; k++){
            printf("* ");
        }

        for (int j = lenght-i; j >= 1; j--){
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int lenght;

    printf("Enter lenght of pattern = ");
    scanf("%d", &lenght);

    pattern(lenght);
    return 0;
}