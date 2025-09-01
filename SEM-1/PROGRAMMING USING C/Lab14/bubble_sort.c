#include <stdio.h>
int lenght;

void bubble_sort(int num_array[lenght]){
    for(int j = 1; j < lenght; j++){
        for(int i=0; i<lenght-1; i++){
            if(num_array[i]>num_array[i+1]){
                int temp= num_array[i+1];
                num_array[i+1]=num_array[i];
                num_array[i]=temp;
            }
        }
    }
    for(int i=0; i<lenght; i++){
        printf("%d\n", num_array[i]);
    }
}
int main(){

    printf("Enter lenght");
    scanf("%d",&lenght);

    int number_array[lenght];

    for(int i=0; i<lenght; i++){
        printf("Enter num_array[%d]", i+1);
        scanf("%d", &number_array[i]);
    }

    bubble_sort(number_array);
    return 0;
}