#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return rand() % 6 + 1;
}

int movePlayer(int position) {
    int diceRoll = rollDice();
    
    if(position + diceRoll > 100) {
        printf("You rolled a %d, which is more then 100, so you stay at position %d.\n", diceRoll, position);
        return position;
    }

    printf("You rolled: %d\n", diceRoll);
    position = position + diceRoll;

    if (position == 37) {
        printf("Oops! A snake! You go back to position 3.\n");
        position = 3;
    } else if (position == 28) {
        printf("Oops! A snake! You go back to position 10.\n");
        position = 10;
    } else if (position == 48) {
        printf("Oops! A snake! You go back to position 16.\n");
        position = 16;
    } else if (position == 96) {
        printf("Oops! A snake! You go back to position 42.\n");
        position = 42;
    } else if (position == 94) {
        printf("Oops! A snake! You go back to position 71.\n");
        position = 71;
    } else if (position == 75) {
        printf("Oops! A snake! You go back to position 32.\n");
        position = 32;
    } else if (position == 4) {
        printf("Yay! A ladder! You climb to position 56.\n");
        position = 56;
    } else if (position == 12) {
        printf("Yay! A ladder! You climb to position 50.\n");
        position = 50;
    } else if (position == 14) {
        printf("Yay! A ladder! You climb to position 55.\n");
        position = 55;
    } else if (position == 22) {
        printf("Yay! A ladder! You climb to position 58.\n");
        position = 58;
    } else if (position == 41) {
        printf("Yay! A ladder! You climb to position 79.\n");
        position = 79;
    } else if (position == 54) {
        printf("Yay! A ladder! You climb to position 88.\n");
        position = 88;
    }
    return position;
}

int main() {
    srand(time(0));
    
    int player1 = 0, player2 = 0;
    int winningPosition = 100;
    char userInput;
    char player1Name[20], player2Name[20];

    printf("-------------Snke and Ladder Game-----------\n");
    printf(" -> The game will end when a player reaches position 100.\n\n");

    printf("Enter player 1 name: ");
    scanf("%s", player1Name);
    printf("Enter player 2 name: ");
    scanf("%s", player2Name);

    int choice = 1;
    do{
        player1 = 0, player2 = 0;
        while (player1 < winningPosition && player2 < winningPosition) {
            printf("%s's turn = \n", player1Name);
            printf("Press 'r' to roll the dice = ");
            scanf(" %c", &userInput); 
            if (userInput == 'r') {
                player1 = movePlayer(player1);
                printf("%s is now at position %d.\n\n",player1Name, player1);
            }
            if (player1 >= winningPosition) {
                printf("%s wins!\n", player1Name);
                break;
            }

            printf("%s's turn:\n", player2Name);
            printf("Press 'r' to roll the dice: ");
            scanf(" %c", &userInput); 

            if (userInput == 'r') {
                player2 = movePlayer(player2);
                printf("%s is now at position %d.\n\n",player2Name, player2);
            }

            if (player2 >= winningPosition) {
                printf("------------\n");
                printf("| %s wins! |\n", player2Name);
                printf("------------\n");
                break;
            }
        }

        printf("-----> Do you want to play again? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    }while(choice != 0);
    
    printf("-----------------------------------------\n");
    printf("| Thanks for playing! Ab Marks Dedo Mam |\n");
    printf("-----------------------------------------");
    return 0;
}
