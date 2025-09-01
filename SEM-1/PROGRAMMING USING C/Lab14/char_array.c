#include <stdio.h>
#include <string.h>

void strConcate(){
    char str1[10], str2[10];
    printf("Enter 1 string ");
    scanf("%s", &str1);
    printf("Enter 2 string ");
    scanf("%s", &str2);

    strcat(str1, str2);
    printf("%s", str1);
}

void strLenght(){
    char name[10];

    // gets(name);
    // puts(name);

    printf("Enter  your name ");
    scanf("%s", &name);

    int lenght = strlen(name);

    for(int i = 0; i < lenght; i++){
        printf("\"%c\"", name[i]);
    }
    printf("Lenght is %d", lenght);
}

void strCopy(){
    char str1[10] = "renil", str2[10] = "";

    strcpy(str2, str1);
    printf("%s", str2);
}

void strCompare(){
    char str1[10] = "renil", str2[10] = "renil";

    if(strcmp(str2, str1) == 0){
        printf("String is equal");
    } else {
        printf("Sring is not equal");
    }
}

void uppercase(){
    char str1[] = "renil";
    // printf("%s", strupr(str1));
    // printf("%s", strlwr(str1)); 
}

int main(){
    strLenght();
    // strConcate();
    // strCopy();
    // strCompare();
    // uppercase();
    return 0;
}