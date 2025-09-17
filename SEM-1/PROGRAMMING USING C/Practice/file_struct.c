// Ask the user to enter details of n employees (ID, Name, Salary).
#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
    char name[20];
    int salary;
};

int main(){
    int lenght;
    FILE *fp;
    struct Employee *ptr;

    printf("Enter number of employee");
    scanf("%d", &lenght);

    ptr = (struct Employee*)malloc(lenght* sizeof(struct Employee));

    fp = fopen("demo.txt", "w");
    if(fp == NULL){
        printf("Error in File opening bro");
        return 1;
    }

    for (int i=0; i<lenght; i++){
        printf("Enter Employee id, name, salary");
        scanf("%d %s %d", &ptr[i].id, ptr[i].name, &ptr[i].salary);
        fprintf(fp, "%d %s %d\n", ptr[i].id, ptr[i].name, ptr[i].salary);
    }
    fclose(fp);

    fp = fopen("demo.txt", "r");
    if(fp == NULL){
        printf("Error in File opening bro");
        return 1;
    }

    struct Employee temp;
    while (fscanf(fp, "%d %s %d", &temp.id, temp.name, &temp.salary) != EOF) {
        printf("ID: %d  Name: %s  Salary: %d\n", temp.id, temp.name, temp.salary);
    }
    fclose(fp);
    return 0;
}