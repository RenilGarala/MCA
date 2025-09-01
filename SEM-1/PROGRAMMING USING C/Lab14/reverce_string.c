#include <stdio.h>
#include <string.h>

void reverceString(char str1[10]){
    int lenght = strlen(str1);

    for(int i = lenght-1; i>=0 ; i--){
        printf("%c", str1[i]);
    }
}

void isPalindrome(char str1[10]){
    int lenght = strlen(str1);
    char temp[lenght];
    int j = 0;
    for(int i = lenght-1; i>=0 ; i--){
        temp[j]=str1[i];
        j++;
    }

    if(strcmp(str1, temp) == 0){
        printf("String is Palindrome\n");
    } else {
        printf("String is not Palindrome\n");
    }
}

int main(){
    char str1[10];

    printf("Enter 1 string ");
    scanf("%s", &str1);

    // reverceString(str1);

    isPalindrome(str1);
    return 0;
}
