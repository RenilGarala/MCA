#include <stdio.h>

struct emp
{
    int id;
    char name[20];
    float salary;
};

void main()
{
    FILE *fp;
    struct emp e;
    int choice;

    clrscr();

    do
    {
        printf("\n--- EMPLOYEE MENU ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            fp = fopen("emp.txt", "a");
            printf("Enter ID: ");
            scanf("%d", &e.id);
            printf("Enter Name: ");
            scanf("%s", e.name);
            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
            fclose(fp);
            break;

        case 2:
            fp = fopen("emp.txt", "r");
            printf("\nID\tName\tSalary\n");
            while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF)
            {
                printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);
            }
            fclose(fp);
            break;

        case 0:
            printf("Exit Employee Program\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 0);

    getch();
}