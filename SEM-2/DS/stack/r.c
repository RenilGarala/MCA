#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Create list
void create() {
    int n, x;
    struct node *temp, *newNode;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &x);

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = x;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}

// Display
void display() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at first
void insertFirst() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;

    printf("Inserted at first\n");
}

// Delete last
void deleteLast() {
    struct node *temp, *prev;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }

    temp = head;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    printf("Last node deleted\n");
}

// Main menu
int main() {
    int choice;

    while (1) {
        printf("\n1.Create  2.Display  3.Insert First  4.Delete Last  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertFirst(); break;
            case 4: deleteLast(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}