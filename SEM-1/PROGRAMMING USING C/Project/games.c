#include <stdio.h>

char board[3][3];

void initBoard() {
    char start = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = start++;
        }
    }
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

void playTicTacToe() {
    initBoard();

    
}

int main() {
    int choice;
    while (1) {
        printf("\n-----Enter Your Choice------\n");
        printf("Enter 1 - To Play Ladder and Snake\nEnter 2 - To Play Tic Tac Toe\nEnter 0 - To Exit\n - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("This is Ladder and Snake Game (not implemented yet).\n");
                break;
            case 2:
                playTicTacToe();
                break;
            case 0:
                printf("Areee Aur Khelo Game, bad me study ker lena\n");
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
