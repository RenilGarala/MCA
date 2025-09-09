#include <stdio.h>

void pattern(int lenght){
    for(int i = 1; i <= lenght; i++){
        for(int j = 1; j <= lenght; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main(){
    int lenght;

    printf("Enter lenght of pattern");
    scanf("%d", &lenght);

    pattern(lenght);
    return 0;
}