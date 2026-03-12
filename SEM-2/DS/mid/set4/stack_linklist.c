#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value = ");
    scanf("%d", &newNode->data);

    newNode->next = top;
    top = newNode;

    printf("Element pushed into stack");
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp = top;
        printf("Deleted element = %d", temp->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element = %d", top->data);
    }
}

void display()
{
    struct node *ptr;
    ptr = top;

    if (ptr == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack elements:\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n===== STACK MENU =====");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice = ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            break;

        default:
            printf("Invalid choice");
        }

    } while (ch != 5);

    return 0;
}