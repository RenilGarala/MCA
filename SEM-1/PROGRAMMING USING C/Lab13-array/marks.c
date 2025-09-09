#include<stdio.h>

void marks_array(int marks[10], char name[10]){
    int i=0;
    while(i<5){
        printf("makars of [%d] = %d\n",i, marks[i]);
        i++;
    }

    printf("Name is %s", name);
}

int main(){
    int marks[5];
    char name[10]; 

    printf("enter student name");
    scanf("%s", &name);

    int i=0;
    while(i<5){
        printf("Enter [%d] ", i);
        scanf("%d", &marks[i]);
        i++;
    }

    marks_array(marks, name);

    return 0;
}