#include <stdio.h>

int findLenght(char name[20]){
    int count=0;

    char *p;
    p=name;
    while(*p!= '\0'){
        p++;
        count++;
    }
    return count;
}

int main(){
    char arr[20];

    printf("Enter String = ");
    scanf("%s",&arr);

    int length ;
    length = findLenght(&arr);

    printf("Lenght is %d", length);
}