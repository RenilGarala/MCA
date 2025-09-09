#include <stdio.h>
int lenght;

void sum_of_array(int subject1[lenght], int subject2[lenght]){
    int temp[lenght];
    for (int i = 0; i < lenght; i++){
        temp[i]= subject1[i]+subject2[i];
    }
    
    for(int i=0; i<lenght; i++){
        printf("Student number [%d], Total Mark is %d (out of 200) \n",i, temp[i]);
    }
}

int main(){
    printf("Enter No. of student ");
    scanf("%d", &lenght);

    int subject1[lenght];
    int subject2[lenght];


    for(int i=0; i<lenght; i++){
        printf("Enter Marks [%d] for subject 1 = ", i+1);
        scanf("%d", &subject1[i]);
    }
    for(int i=0; i<lenght; i++){
        printf("Enter Marks [%d] for subject 2 = ", i+1);
        scanf("%d", &subject2[i]);
    }

    sum_of_array(subject1, subject2);
    return 0;
}