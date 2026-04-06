#include <stdio.h>

int main() {
    int arr[100], n, i;
    int stack[100], top = -1;
    int low, high, pivot, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    stack[++top] = 0;
    stack[++top] = n - 1;

    while(top >= 0) {
        high = stack[top--];
        low = stack[top--];

        pivot = arr[low];
        i = low;
        j = high;

        while(i < j) {
            while(arr[i] <= pivot && i < high) i++;
            while(arr[j] > pivot) j--;

            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        if(low < j - 1) {
            stack[++top] = low;
            stack[++top] = j - 1;
        }

        if(j + 1 < high) {
            stack[++top] = j + 1;
            stack[++top] = high;
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}