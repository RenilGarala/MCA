#include<stdio.h>
int main(){
    int arr[7] = {34,4,-39,12,45,23,67},n=7, temp;

    //selection sort
    // for(int i = 0 ; i < n - 1; i++)
    // {
    //     int min = i;
    //     for(int j=i;j<n;j++)
    //     {
    //         if(arr[j] < arr[min]){
    //             min = j;
    //         }
    //     }
    //     temp = arr[min];
    //     arr[min] = arr[i];
    //     arr[i] = temp;
    // }

    //bubble sort
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1;j++){
    //         if(arr[j] > arr[j+1]){
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    //insertion sort algorithm 
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        for(j = i - 1; j>=0 && arr[j] > key; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
    
    printf("Sorted Array ");
    for(int i = 0; i< n; i++){
        printf("%d | ", arr[i]);
    }
    return 0;
}