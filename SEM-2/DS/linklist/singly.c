#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start;
void create()
{
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\np1. input value");
    scanf("%d", &newNode->data);

    newNode->next = NULL;
    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\t%d", ptr->data);
        ptr = ptr->next;
    }
}

void delete()
{
    struct node *ptr;
    ptr = start;

    if (ptr == NULL){
        printf("list is empty");
    }
    else if (ptr->next == NULL){
        start=NULL;
        printf("single node is deleted");
    }
    else{
        while (ptr->next != NULL){
            if (ptr->next->next == NULL){
                ptr->next = NULL;
                printf("node deleted");
                break;
            }
            ptr = ptr->next;
        }
    }
}

void deleteAt()
{
    int value;
    struct node *ptr;
    ptr = start;

    printf("Enter number to delete from linklist = ");
    scanf("%d", &value);

    if(ptr == NULL){
        printf("List is empty");
    } else if(ptr->data == value){
        start = start->next;
        printf("node deleted");
    } else{
        while (ptr->next != NULL)
        {
            if(ptr->next->data == value){
                ptr->next = ptr->next->next;
                printf("node deleted");
            }
            ptr= ptr->next;
        }
    }
}

int main(){
    int ch=0;
    start=NULL;
    
    do{
        printf("\n============ M A N U ==============");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Delete Last Element");
        printf("\n3. Delete At");
        printf("\n10. Exit");
        printf("\nEnter ch = ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                delete();
                break;
            case 4:
                deleteAt();
                break;
            case 10:
                break;
            default:
                printf("Enter valid choice");
                break;
        }
    }while(ch!=0);
    return 0;
}