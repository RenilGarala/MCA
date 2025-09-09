#include<stdio.h>

void pattern(int lenght){
    int temp = 1;
    for (int i = 1; i <= lenght; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", temp);
            temp++;
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