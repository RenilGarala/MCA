#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value = ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if(front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Element inserted in queue");
}

void dequeue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        temp = front;
        printf("Deleted element = %d", front->data);
        front = front->next;
        free(temp);

        if(front == NULL)
        {
            rear = NULL;
        }
    }
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Front element = %d", front->data);
    }
}

void display()
{
    struct node *ptr;
    ptr = front;

    if(ptr == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue elements:\n");
        while(ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n===== QUEUE MENU =====");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter choice = ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
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

    }while(ch != 5);

    return 0;
}