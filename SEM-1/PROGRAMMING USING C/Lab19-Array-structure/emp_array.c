#include <stdio.h>

struct employee{
    int id;
    char name[20];
    int salary;
};


int main(){
    int lenght;
    printf("Enter Lenght = ");
    scanf("%d", &lenght);
    
    struct employee e[lenght];

    for(int i =0; i<lenght; i++){
        printf("Enter Your ID = ");
        scanf("%d", &e[i].id);
        printf("Enter Your Name = ");
        scanf(" %[^\n]", e[i].name);
        printf("Enter Salary = ");
        scanf("%d", &e[i].salary);
    }

    printf("\nID\t Name\t\t salary");
    for(int i = 0; i<lenght; i++){
        printf("\n%d\t %s\t %d", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}
