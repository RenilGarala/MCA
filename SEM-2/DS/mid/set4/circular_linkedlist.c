#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void create()
{
    struct node *newNode, *ptr;
    int n, i;

    printf("Enter number of nodes = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value = ");
        scanf("%d", &newNode->data);

        if(start == NULL)
        {
            start = newNode;
            newNode->next = start;
        }
        else
        {
            ptr = start;
            while(ptr->next != start)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
            newNode->next = start;
        }
    }
}

void display()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("List is empty");
        return;
    }

    ptr = start;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    while(ptr != start);
}

void insertFirst()
{
    struct node *newNode, *ptr;

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value = ");
    scanf("%d", &newNode->data);

    if(start == NULL)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        ptr = start;
        while(ptr->next != start)
        {
            ptr = ptr->next;
        }

        newNode->next = start;
        ptr->next = newNode;
        start = newNode;
    }

    printf("Node inserted at first");
}

void deleteLast()
{
    struct node *ptr, *prev;

    if(start == NULL)
    {
        printf("List is empty");
    }
    else if(start->next == start)
    {
        start = NULL;
        printf("Last node deleted");
    }
    else
    {
        ptr = start;
        while(ptr->next != start)
        {
            prev = ptr;
            ptr = ptr->next;
        }

        prev->next = start;
        printf("Deleted element = %d", ptr->data);
        free(ptr);
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n===== MENU =====");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert First");
        printf("\n4. Delete Last");
        printf("\n5. Exit");
        printf("\nEnter choice = ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insertFirst();
                break;

            case 4:
                deleteLast();
                break;

            case 5:
                break;

            default:
                printf("Invalid choice");
        }

    }while(ch != 5);

    return 0;
}