
#include <stdio.h>
#include <stdlib.h>

void createArray(int n, int *ptr){
    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Not sufisent memeory");
    }
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }

    int new_size;
    printf("Entet new size");
    scanf("%d", &new_size);

    int *temp_arr = (int *)realloc(ptr, new_size * sizeof(int));

    for(int i=n; i<new_size; i++){
        scanf("%d", &temp_arr[i]);
    }
    for(int i=0; i<new_size; i++){
        printf("%d ", temp_arr[i]);
    }
} 

int main(){
    int *ptr,n;

    printf("Entet number of element");
    scanf("%d", &n);

    createArray(n, ptr);
    return 0;
}