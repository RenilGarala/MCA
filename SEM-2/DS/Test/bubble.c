#include <stdio.h>

int main() {
    int arr[8] = {5,33,43,1,4,11,2,3}, n = 8, i, j, temp;

    // Bubble Sort Algorithm
    //find maximum and shift to right most
    // for(i = 0; i < n-1; i++){
    //     for (j = 0; j < n-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    //selection sort Algorithm 
    //select minimum and shift to left most
    // for (i=0; i<n-1; i++){
    //     int min = i;
    //     for(j=i+1; j<n; j++){
    //         if(arr[j]<arr[min]){
    //             min = j;
    //         }
    //     }
    //     temp = arr[i];
    //     arr[i] = arr[min];
    //     arr[min] = temp;
    // }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}