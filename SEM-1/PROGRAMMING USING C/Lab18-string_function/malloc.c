//count uppercase lowercase char from char array using pointer
//count number of line, words and char and numbers from string using pointer 
//concate two string into 3rd string using pointer
//copy 1 string copy into another string using pointer

//sacnf("%[^$]s", &str);

#include <stdio.h>
#include <stdlib.h>

void createArray(int n, int *ptr){
    ptr = (int *)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
} 

int main(){
    int *ptr,n;

    printf("Entet number of element");
    scanf("%d", &n);

    createArray(n, ptr);
    return 0;
}