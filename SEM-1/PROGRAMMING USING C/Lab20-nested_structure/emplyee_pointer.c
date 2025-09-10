#include<stdio.h>
#include <stdlib.h>

struct employee{
    int e_id;
    char name[10];
    int salary;
};

int main(){
    int lenght;
    struct employee *ptr;

    printf("Enter number of employee Detail");
    scanf("%d", &lenght);
    
    ptr = (struct employee*)malloc(lenght * sizeof(struct employee));
    
    for(int i = 0; i<lenght; i++){
        struct employee e1[i];
        printf("Enter Employee id = ");
        scanf("%d", &(ptr+i)->e_id);

        printf("Enter Employee Name = ");
        scanf("%s", &(ptr+i)->name);

        printf("Enter Employee Salary = ");
        scanf("%d", &(ptr+i)->salary);
    }

    printf("------Empleye Detail-------\n");
    printf("Id\tName\tSalary\t\n");

    for(int i = 0; i<lenght; i++){
        printf("%d\t%s\t%d\n", (ptr+i)->e_id,(ptr+i)->name, (ptr+i)->salary);
    }
    
    return 0;
}