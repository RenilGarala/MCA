#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
    if (fp == NULL) {
        printf("Error reading file");
    }
    else {
        ch =fgetc(fp);
        printf(" the first char from file is : %c",ch);
    }
    return 0;
}