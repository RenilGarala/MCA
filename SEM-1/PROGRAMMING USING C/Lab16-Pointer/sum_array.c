#include <stdio.h>
int main(){
    int arr[5] = {5,4,3,2,1};
    int *p = arr;

    int sum = 0;
    for(int i=0; i<5; i++){
        sum += *(p+i);
    }
    printf("Sum is %d", sum);

    return 0;
}