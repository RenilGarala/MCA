#include <stdio.h>

struct employee{
    int id;
    char name[20];
    int basic_salary;
};
int main(){
    int hra[5],da[5],pf[5],net_salary[5];
    struct employee e[5];
    for(int i = 0; i<5; i++){
        printf("Enter Your ID = ");
        scanf("%d", &e[i].id);
        printf("Enter Your Name = ");
        scanf(" %s", e[i].name);
        printf("Enter Salary = ");
        scanf("%d", &e[i].basic_salary);

        hra[i] = e[i].basic_salary*0.10;
        da[i] = e[i].basic_salary*0.05;
        pf[i] = e[i].basic_salary*0.12;
        net_salary[i] = e[i].basic_salary+hra[i]+da[i]-pf[i];
    }

    printf("\nID\t Name\t\t salary\t Hra\t da\t pf\t Net Salary");
    for(int i = 0; i<5; i++){
        printf("\n%d\t %s\t %d\t %d\t %d\t %d\t %d", e[i].id, e[i].name, e[i].basic_salary, hra[i], da[i], pf[i], net_salary[i]);
    }
    return 0;
}
