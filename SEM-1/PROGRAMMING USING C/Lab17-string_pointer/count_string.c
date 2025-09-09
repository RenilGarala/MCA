//count number of line, words and char and numbers from string using pointer

#include<stdio.h>
#include <ctype.h>
void analyze(char name[]){
    char *p = name;
    int lines = 0, words = 0, latter = 0, number = 0;
    int inWord = 0;

    while(*p!= '\0'){

        if (*p == '\n') {
            lines++;
        }
        if (isdigit(*p)) {
            number++;
        }
        if (*p == ' ' || *p == '\n' || *p == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
        if(*p != ' '){
            latter++; 
        }

        p++;
    }
    printf("Total Line %d\n", lines);
    printf("Total Words %d\n", words);
    printf("Total Latter %d\n", latter);
    printf("Total Number %d\n", number);
}

int main(){
    char arr[100];

    printf("Enter a string:\n");
    scanf("%[^$]", arr);

    analyze(&arr);
    return 0;
}