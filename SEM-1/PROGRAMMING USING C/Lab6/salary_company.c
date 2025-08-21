#include<stdio.h>

void net_salary(int basic, int level){
    int gross_salary, net_salary;
    float income_tax;
    int parks;

    if(basic >= 6000 && level == 1){
        parks = 1500;
    } else if(basic >= 4000 && level == 2){
        parks = 950;
    } else if(basic >= 2000 && level == 3){
        parks = 600;
    } else if(basic >= 1000 && level == 4){
        parks = 250;
    } else{
        printf("Your salary does not match with your level");
        return;
    }

    gross_salary = basic + (basic * 0.1) + parks;

    if(gross_salary <= 2000){
        income_tax = 0;
    } else if(gross_salary > 2000 && gross_salary <= 4000){
        income_tax = 3;
    } else if(gross_salary > 4000 && gross_salary <= 5000){
        income_tax = 5;
    } else if(gross_salary > 5000){
        income_tax = 8;
    }

    float tax = (gross_salary * income_tax) / 100;
    net_salary = gross_salary - tax;

    printf("Net Salary is = %d", net_salary);

}
int main(){
    int job_no, level, basic;

    printf("Enter Job Number ");
    scanf("%d", &job_no);

    printf("Enter Your Job Level ");
    scanf("%d", &level);

    printf("Enter Basic Salary ");
    scanf("%d", &basic);

    net_salary(basic , level);
    return 0;
}