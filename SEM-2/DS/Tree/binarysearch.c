#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 1000000
int main(){
    int no[MAX], beg=0, end=MAX-1, mid, data;
    int iteration = 0;
    clock_t starttime = clock();

    for(int i=0; i<MAX; i++){
        no[i] = i+1;
    }
    for(int i=0; i<MAX; i++){
        printf("%d ", no[i]);
    }

    printf("Enter the data to be searched = ");
    scanf("%d", &data);
    

    while(beg <= end){
        mid = (beg + end)/2;
        iteration++;
        printf("beg = %d, mid = %d end = %d,\n", beg, mid, end);
        if(no[mid] == data){
            printf("Data found at index %d\n", mid);
            break;
        } else if(data < no[mid]){
            end = mid - 1;
        } else{
            beg = mid + 1;
        }
    }

    if(beg > end){
        printf("Data not found");
    }
    clock_t endtime = clock();
    double cpu_time_used = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    printf("Number of iterations = %d", iteration);
    printf("Time taken = %f seconds\n", cpu_time_used);
    return 0;
}
