//count uppercase lowercase char from char array using pointer
#include<stdio.h>

void search(char name[]){
    char *p = name;
    int uppercase = 0, lowercase = 0;
    while(*p!= '\0'){
        if(*p >= 'A' && *p <= 'Z'){
            uppercase++;
        } else if(*p >= 'a' && *p <= 'z'){
            lowercase++;
        }
        p++;
    }
    printf("Total Lower case in string is %d\n", lowercase);
    printf("Total Upper case in string is %d\n", uppercase);
}

int main(){
    char arr[] = "Renil Garala";
    search(&arr);
    return 0;
}