#include <stdio.h>
#include <string.h>

void strCat(char str1[10],char str2[10]){
    strcat(str1, str2);
    printf("String 1 is = %s", str1);
}

int main(){
    char str1[10], str2[10];

    printf("Enter 1 string ");
    scanf("%s", &str1);
    printf("Enter 2 string ");
    scanf("%s", &str2);

    strCat(str1, str2);
    return 0;
}