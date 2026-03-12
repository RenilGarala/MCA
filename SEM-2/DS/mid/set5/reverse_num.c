#include <stdio.h>

int stack[100];
int top = -1;

void push(int x)
{
    top++;
    stack[top] = x;
}

int pop()
{
    int x;
    x = stack[top];
    top--;
    return x;
}

int main()
{
    int num, digit, rev = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        push(digit);
        num = num / 10;
    }

    while(top != -1)
    {
        digit = pop();
        rev = rev * 10 + digit;
    }

    printf("Reversed number = %d", rev);

    return 0;
}