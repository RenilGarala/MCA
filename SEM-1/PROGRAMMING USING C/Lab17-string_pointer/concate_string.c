//concate two string into 3rd string using pointer

#include<stdio.h>

void cancateString(char str1[], char str2[], char result[]){
    char *s1 = str1;
    char *s2 = str2;
    char *ans = result;

    while(*s1 != '\0'){
        *ans = *s1;
        s1++;
        ans++;
    }

    while(*s2 != '\0'){
        *ans = *s2;
        s2++;
        ans++;
    }
}

int main(){
    char str1[20], str2[20], result[40];

    printf("Enter String 1 = ");
    scanf("%s", &str1);
    printf("Enter String 2 = ");
    scanf("%s", &str2);

    cancateString(str1, str2, result);

    printf("Concatenated string = %s\n", result);
    return 0;
}