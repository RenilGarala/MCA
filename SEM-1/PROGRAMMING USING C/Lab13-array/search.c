#include <stdio.h>
int lenght;

int sreach_element(int num_arr[lenght], int key){
    for (int i = 0; i < lenght; i++){
        if(num_arr[i]==key){
            printf("ELEMENT FOUND");
            return 0;
        }
    }
    printf("ELEMENT DOES NOT FOUND");
}

int main(){
    printf("Enter length ");
    scanf("%d", &lenght);

    int num_arr[lenght];

    for(int i=0; i<lenght; i++){
        printf("Enter [%d]th Number = ", i+1);
        scanf("%d", &num_arr[i]);
    }

    int key;
    printf("Enter number to search = ");
    scanf("%d", &key);

    sreach_element(num_arr, key);
    return 0;
}
