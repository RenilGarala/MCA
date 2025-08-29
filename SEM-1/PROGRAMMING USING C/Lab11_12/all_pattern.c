#include <stdio.h>

void pattern0(int lenght){
    for(int i = 1; i <= lenght; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern1(int lenght){
    for(int i = 1; i <= lenght; i++){
        for(int j = 1; j <= lenght; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern2(int lenght){
    int temp = 1;
    for (int i = 1; i <= lenght; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", temp);
            temp++;
        }
        printf("\n");
    }
}

void pattern3(int lenght){
    for (int i = 1; i <= lenght; i++){

        for (int j = lenght-i; j >= 1; j--){
            printf("  ");
        }

        for (int k = 1; k <= i; k++){
            printf("* ");
        }

        printf("\n");
    }
}

void pattern4(int lenght){
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

void pattern5(int lenght){
    for (int i = 1; i <= lenght; i++){

        for (int j = lenght-i; j >= 1; j--){
            printf(" ");
        }

        int count = 1;

        for (int k = 1; k <= i; k++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

void pattern6(int lenght){
    for (int i = 1; i <= lenght; i++){
        for (int j = lenght-i; j >= 1; j--){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pattern7(int lenght){
    int count = lenght;
    for (int i = 1; i <= lenght; i++){
        for (int j = 1; j < i; j++){
            printf("  ");
        }
        for (int j = 1; j < lenght-i+2; j++){
            printf("%d ",count);
        }
        count--;
        printf("\n");
    }
}

void pattern8(int lenght){
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
    for (int i = 2; i <= lenght; i++){
        for (int j = 1; j < i; j++){
            printf(" ");
        }
        for (int j = 1; j < lenght-i+2; j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int lenght;
    int choice;
    printf("Enter your pattern number ");
    scanf("%d", &choice);

    printf("Enter lenght of pattern");
    scanf("%d", &lenght);

    switch(choice){
        case 0:
            pattern0(lenght);
            break;
        case 1:
            pattern1(lenght);
            break;
        case 2:
            pattern2(lenght);
            break;
        case 3:
            pattern3(lenght);
            break;
        case 4:
            pattern4(lenght);
            break;
        case 5:
            pattern5(lenght);
            break;
        case 6:
            pattern6(lenght);
            break;
        case 7:
            pattern7(lenght);
            break;
        case 8:
            pattern8(lenght);
            break;
        default:
            printf("Give valid number");
    }
    return 0;
}
