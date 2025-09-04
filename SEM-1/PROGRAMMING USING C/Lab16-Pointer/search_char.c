#include <stdio.h>

void search(char name[10], char ele){
    char *p;
    p=name;
    int isFound =0 ;
    while(*p!= '\0'){
        if(*p == ele){
            printf("Found");
            isFound = 1;
        }
        p++;
    }
    if(isFound == 0){
        printf("NOT founded");
    }

    return count;
}

int main(){
    char arr[10] = 'renil';
    search(&arr, 'r');
}