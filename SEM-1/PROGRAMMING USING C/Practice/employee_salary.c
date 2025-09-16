#include<stdio.h>
#include<stdlib.h>

struct Student{
    int employee_id;
    char name[20];
    int salary;
};

int main(){
    int N;

    printf("Enter Length of student List");
    scanf("%d", &N);

    struct Student *ptr;

    ptr = (struct Student*)malloc(N * sizeof(struct Student));

    for(int i=0; i<N; i++){
        printf("Enter Emplyee id = ");
        scanf("%d", &(ptr+i)->employee_id);

        printf("Enter Name = ");
        scanf("%s", &(ptr+i)->name);

        printf("Enter Salary = ");
        scanf("%d", &(ptr+i)->salary);
    }

    printf("-----------Employee Detail-----------\n");
    printf("E_ID\tName\tSalary\n");

    for(int i=0; i<N; i++){
        printf("%d\t%s\t%d\n", (ptr+i)->employee_id, (ptr+i)->name, (ptr+i)->salary);
    }

    printf("-----------Updated Employee List-----------\n");
    printf("E_ID\tName\tSalary\n");

    for(int i=0; i<N; i++){
        if((ptr+i)->salary < 20000){
            int extra_salary = (ptr+i)->salary*0.1;
            printf("%d\t%s\t%d\n", (ptr+i)->employee_id, (ptr+i)->name, (ptr+i)->salary + extra_salary);
        } else{
            printf("%d\t%s\t%d\n", (ptr+i)->employee_id, (ptr+i)->name, (ptr+i)->salary);
        }
    }

    return 0;
}
