//Use pointers to dynamically store employee details in memory.
#include<stdio.h>
#include<stdlib.h>

struct Employee{
    int id;
    char name[20];
};

int main(){
    FILE *fp;
    struct Employee emp;
    int n;
    int choice;
    
    while (1) {
        printf("\n--- Employee Management Menu ---\n");
        printf("1. Add Employee Records\n");
        printf("2. Display Employee Records\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                fp = fopen("Data.txt", "a");  
                if (fp == NULL) {
                    printf("Error opening file for writing!\n");
                    return 1;
                }
               
                printf("Enter Employee ID and Name: ");
                scanf("%d %s", &emp.id, emp.name);
                fprintf(fp, "%d %s\n", emp.id, emp.name);
            
                fclose(fp);
                printf("Employees added successfully!\n");
                break;
            }
            case 2: {
                fp = fopen("Data.txt", "r");
                if (fp == NULL) {
                    printf("No employee records found!\n");
                    break;
                }

                printf("\n--- Employee Records ---\n");
                while (fscanf(fp, "%d %s", &emp.id, emp.name) == 2) {
                    printf("ID: %d  Name: %s\n", emp.id, emp.name);
                }
                fclose(fp);
                break;
            }
            case 0:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}