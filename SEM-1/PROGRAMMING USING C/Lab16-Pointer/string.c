#include <stdio.h>
int main(){
    char arr[20] = "hey there! i am renil garala";
    char *p = arr;

    //using for loop
    for(int i=0; i<20; i++){
        printf("%c",*(p+i));
    }

    printf("\n");
    //using while loop
    while(*p!= '\0'){
        printf("%c", *p);
        p++;
    }

    return 0;
}