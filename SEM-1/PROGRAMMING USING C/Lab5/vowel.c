#include<stdio.h>

void alphabet_or_not(char alphabet){
    switch(alphabet){
        case 'a': 
            printf("Alphabet is Vowel \n");
            break;
        case 'e':
            printf("Alphabet is Vowel \n");
            break;
        case 'i':
            printf("Alphabet is Vowel \n");
            break;
        case 'o':
            printf("Alphabet is Vowel \n");
            break;
        case 'u':
            printf("Alphabet is Vowel \n");
            break;
        default:
            printf("Alphabet is Consonants \n");
    }
}

int main(){
    char alphabet;

    printf("Enter any Alphabet = ");
    scanf("%c", &alphabet);

    alphabet_or_not(alphabet);
    return 0;
}