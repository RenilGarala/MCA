#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *copy = NULL;

void create()
{
    struct node *newNode, *ptr;
    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value = ");
    scanf("%d",&newNode->data);

    newNode->next = NULL;

    if(start == NULL)
    {
        start = newNode;
    }
    else
    {
        ptr = start;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void display(struct node *head)
{
    struct node *ptr;
    ptr = head;

    if(ptr == NULL)
    {
        printf("List is empty");
        return;
    }

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

void countNodes()
{
    struct node *ptr;
    int count = 0;

    ptr = start;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    printf("Total nodes = %d",count);
}

void copyList()
{
    struct node *ptr, *newNode, *temp;

    ptr = start;

    while(ptr != NULL)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = ptr->data;
        newNode->next = NULL;

        if(copy == NULL)
        {
            copy = newNode;
            temp = copy;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        ptr = ptr->next;
    }

    printf("Linked list copied successfully\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n===== MENU =====");
        printf("\n1. Create Node");
        printf("\n2. Display Original List");
        printf("\n3. Count Nodes");
        printf("\n4. Copy Linked List");
        printf("\n5. Display Copied List");
        printf("\n6. Exit");
        printf("\nEnter choice = ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create();
                break;

            case 2:
                display(start);
                break;

            case 3:
                countNodes();
                break;

            case 4:
                copyList();
                break;

            case 5:
                display(copy);
                break;

            case 6:
                break;

            default:
                printf("Invalid choice");
        }

    }while(ch != 6);

    return 0;
}