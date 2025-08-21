#include<stdio.h>

int grossPay(int basic){
    float da, hra, pf;
    float gross;

    if (basic < 5000){
        da = basic * 0.30;
    } else {
        da = basic * 0.45;
    }
    hra = basic * 0.15;
    pf = basic * 0.12;

    gross = basic + da + hra - pf;
    return gross;
}

void empDetail(char emp_name[20], double basic, float gross_salary){
    printf("Employee Name %s \n", emp_name);
    printf("Employee Basic Salary is %.2lf \n", basic);
    printf("Employee Gross is %.2f \n", gross_salary);
}

int main(){
    double basic;
    float gross_salary;
    char emp_name[20];


    printf("Enter Your Name = ");
    scanf("%s", &emp_name);
    printf("Enter Based salaray = ");
    scanf("%lf", &basic);

    printf("=========================== \n");

    gross_salary = grossPay(basic);

    empDetail(emp_name, basic, gross_salary);
    return 0; 
}