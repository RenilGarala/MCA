#include <stdio.h>

int main(){
    char name[20];

    printf("Enter String = ");
    scanf("%s", &name);

    // printf("\"%c\"",  name[4] );
    int i = 0;
    while(1){
        if(name[i] == " "){
            break;
        }
        printf("\"%c\"",  name[i] );
        i++;
    }
    return 0;
}