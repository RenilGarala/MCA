#include <stdio.h>
#include <stdlib.h>

int max_min(int n, int *ptr){
    ptr = (int *)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    int max = ptr[0];
    int min = ptr[0];
    for(int i=1; i<n; i++){
        if(max < ptr[i]){
            max = ptr[i];
        }
        if(min > ptr[i]){
            min = ptr[i];
        }
    }

    printf("Min number is %d and max number is %d", min, max);
} 

int main(){
    int *ptr,n;

    printf("Entet number of element");
    scanf("%d", &n);

    max_min(n, ptr);
    // free(ptr);
    return 0;
}