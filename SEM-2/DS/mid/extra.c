#include<stdio.h>
#include<stdlib.h>
int top = -1;
#define n 100
int arr[n];

void push(){
    int number;
    if(top == n-1){
        printf("Stack overflow");    
    }
    else{
        printf("enter number");
        scanf("%d",&number);

        top++;
        arr[top] = number;
        printf("number added");
    }
}
void pop(){
    if(top == -1){
        printf("stack is underflow");
    }
    else{
        top--;
        printf("number pop");
    }
}
void peek(){
    if(top == -1){
        printf("stack underflow");
    }
    else{
        
        printf("top element %d",arr[top]);
    }
}
void display()
{
    if(top == -1){
        printf("stack underflow");
    } else{
        for(int i=0; i<=top; i++){
        printf("%d | ",arr[i]);
    }
}
    }

void main()
{
    int choice;
    do{
        printf("enter chocie");
        scanf("%d",&choice);

        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
                    break;
            default:
                    printf("Invalid choice");
        }
    }while(1);
}

    