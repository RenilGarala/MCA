#include <stdio.h>
int board[3][3];

void initializeBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}

void displayBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", board[i][j]);
            if(j < 2){
                printf(" | ");
            }
        }
        printf("\n");
        if(i < 2){
            printf("--+---+---\n");
        }
    }
}

void main(){
    int isGameOver = 0;

    printf("Tic Tac Toe Game\n");
    printf("Player 1 = X\n");
    printf("Player 2 = O\n");

    initializeBoard();

    while (gameStatus == 0) {
        displayBoard();
    }
}
