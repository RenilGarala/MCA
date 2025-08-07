#include<stdio.h>

int grossPay(int basic){
    float da, hra, conveyance, medical, other;
    float gross;

    da = basic * 0.10;
    hra = basic * 0.08;
    conveyance = basic * 0.05;
    medical = basic * 0.10;
    other = basic * 0.05;

    gross = da + hra + conveyance + medical + other;
    return gross;
}

void empDetail(char emp_name[20], char emp_id[6], char emp_role[20], double basic, float gross_salary){
    printf("Employee Name %s \n", emp_name);
    printf("Employee Id %s \n", emp_id);
    printf("Employee Role %s \n", emp_role);
    printf("Employee Basic Salary is %.2lf \n", basic);
    printf("Employee Gross is %.2f \n", gross_salary);

}

int main(){
    char emp_name[20], emp_id[6], emp_role[20];
    double basic;
    float gross_salary;

    printf("Enter Name = ");
    scanf("%s", &emp_name);
    printf("Enter Id = ");
    scanf("%s", &emp_id);
    printf("Enter Role = ");
    scanf("%s", &emp_role);

    printf("Enter Based salaray = ");
    scanf("%lf", &basic);

    printf("=========================== \n");

    gross_salary = grossPay(basic);

    empDetail(emp_name, emp_id, emp_role, basic, gross_salary);
    return 0; 
}