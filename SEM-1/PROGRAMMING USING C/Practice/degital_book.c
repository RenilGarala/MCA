#include<stdio.h>
#include<stdlib.h>

struct Contact{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main(){
    struct Contact *ptr;
    int choice=0;
    ptr = (struct Contact*)malloc(5 * sizeof(struct Contact));

    do{
        printf("\n--- Contact Manager ---\n");
        printf("1. Add New Contact\n");
        printf("2. Display All Contacts\n");
        printf("4. Exit\n");
        printf("-----------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(&contacts, &count);
                break;
            case 2:
                displayAllContacts(contacts, count);
                break;
            case 3:
                printf("Saving contacts and exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}