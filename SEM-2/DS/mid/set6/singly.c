#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start1 = NULL;
struct node *start2 = NULL;

void create1()
{
    struct node *newNode, *ptr;

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value for List1 = ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    if(start1 == NULL)
        start1 = newNode;
    else
    {
        ptr = start1;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
}

void create2()
{
    struct node *newNode, *ptr;

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value for List2 = ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    if(start2 == NULL)
        start2 = newNode;
    else
    {
        ptr = start2;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
}

void display(struct node *start)
{
    struct node *ptr;
    ptr = start;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void merge()
{
    struct node *ptr;

    if(start1 == NULL)
    {
        start1 = start2;
        return;
    }

    ptr = start1;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = start2;
    printf("Lists merged successfully\n");
}

void search()
{
    int value, pos = 1;
    struct node *ptr;

    printf("Enter value to search = ");
    scanf("%d",&value);

    ptr = start1;

    while(ptr != NULL)
    {
        if(ptr->data == value)
        {
            printf("Element found at position %d\n",pos);
            return;
        }
        ptr = ptr->next;
        pos++;
    }

    printf("Element not found\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n===== MENU =====");
        printf("\n1. Insert in List1");
        printf("\n2. Insert in List2");
        printf("\n3. Display List1");
        printf("\n4. Display List2");
        printf("\n5. Merge Lists");
        printf("\n6. Search Element");
        printf("\n7. Exit");
        printf("\nEnter choice = ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create1();
                break;

            case 2:
                create2();
                break;

            case 3:
                display(start1);
                break;

            case 4:
                display(start2);
                break;

            case 5:
                merge();
                break;

            case 6:
                search();
                break;

            case 7:
                break;

            default:
                printf("Invalid choice");
        }

    }while(ch != 7);

    return 0;
}