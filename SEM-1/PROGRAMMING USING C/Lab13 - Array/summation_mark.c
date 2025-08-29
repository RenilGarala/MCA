#include<stdio.h>

int lenght;
int summation_mark(int marks[lenght]){
    int sum=0;
    for (int i =0; i<lenght; i++){
        sum+=marks[0];
    }

    return sum;
}

int main(){
    printf("Enter array length ");
    scanf("%d", &lenght);

    int marks[lenght];

    int i=0;
    while(i<lenght){
        printf("Enter Marks [%d] ", i+1);
        scanf("%d", &marks[i]);
        i++;
    }
    int sum = summation_mark(marks);
    printf("Sum is = %d", sum);


    return 0;
}