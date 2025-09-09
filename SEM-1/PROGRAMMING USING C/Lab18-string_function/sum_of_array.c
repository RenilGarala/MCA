
#include <stdio.h>
#include <stdlib.h>

int createArray(int n, int *ptr){
    int sum = 0;
    ptr = (int *)malloc(n * sizeof(int));

    printf("Size of each element is %lu \n", sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        sum += ptr[i];
    }
    return sum;
} 

int main(){
    int *ptr,n;

    printf("Entet number of element");
    scanf("%d", &n);

    int result = createArray(n, ptr);
    printf("Sum of given number using pointer is %d", result);
    return 0;
}