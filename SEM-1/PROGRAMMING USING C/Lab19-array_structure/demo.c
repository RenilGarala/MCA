#include <stdio.h>

struct employee{
    int id;
    char name[20];
    int salary;
};

int main(){
    int length;
    printf("Enter Lenght = ");
    scanf("%d", &length);

    struct employee e[length];

    for(int i=0; i<length; i++){
        printf("Enter id = ");
        scanf("%d", &e[i].id);
        printf("Enter name = ");
        scanf("%s", e[i].name);
        printf("Enter salary = ");
        scanf("%d", &e[i].salary);
    }

    for(int i=0; i<length; i++){
        printf("id = %d, name = %s, salary = %d\n", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}
