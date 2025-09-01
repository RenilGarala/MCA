#include <stdio.h>
#include <string.h>

void strCopy(char str1[10],char str2[10]){
    strcpy(str2, str1);
    printf("String 2 is = %s", str2);
}


int main(){
    char str1[10], str2[10];

    printf("Enter 1 string ");
    scanf("%s", &str1);
    printf("Enter 2 string ");
    scanf("%s", &str2);

    strCopy(str1, str2);
    return 0;
}