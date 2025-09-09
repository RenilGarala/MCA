//copy 1 string copy into another string using pointer

#include <stdio.h>

void copystring(char str[], char copied[]){
    char *s = str;
    char *cpy = copied;
    while(*s != '\0'){
        *cpy = *s;
        cpy++;
        s++;
    }
}

int main(){
    char str[20], copied[20];

    printf("Enter String (10 Max Element) ");
    scanf("%[^\n]", &str);

    copystring(str, copied);

    printf("Another Copied String is %s\n", copied);
    return 0;
}