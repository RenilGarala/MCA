#include<stdio.h>

void alphabet_or_not(char ch){
    int start = (int)'a';
    int end = (int)'z';

    int startc = (int)'A';
    int endc = (int)'Z';
    
    if(start <= (int)ch && end >= (int)ch || startc <= (int)ch && endc >= (int)ch ){
        printf("This Char is Alphabet");
    } else {
        printf("This Char is not alphabet");
    }
}

int main(){
    char ch;
    printf("enter alphabet = ");
    scanf("%c", &ch);

    alphabet_or_not(ch);
    return 0;
}