#include <stdio.h>
int lenght;
int max_arr(int number_array[lenght]){
    int max = number_array[0];
    for (int i = 1; i < lenght; i++){
        if(number_array[i]>max){
            max = number_array[i];
        }
    }
    return max;
}

int min_arr(int number_array[lenght]){
    int min = number_array[0];
    for (int i = 1; i < lenght; i++){
        if(number_array[i]<min){
            min = number_array[i];
        }
    }
    return min;
}

int main(){
    printf("Enter array length ");
    scanf("%d", &lenght);

    int marks[lenght];

    for(int i=0; i<lenght; i++){
        printf("Enter Marks [%d] ", i+1);
        scanf("%d", &marks[i]);
    }

    int max_value = max_arr(marks);
    int min_value = min_arr(marks);

    printf("Max number is %d and min number is %d\n", max_value, min_value);
    return 0;
}