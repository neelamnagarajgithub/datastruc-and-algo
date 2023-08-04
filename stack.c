#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
int top;
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("The stack is full");
    }
    else
    {
        top++;
        arr[top] = x;
        printf("Pushed element:%d", x);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Popped element: %d\n", arr[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("no more data\n");
    }
    else
    {
        for (int i = top; i > 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int op;
    int x;
    while (1)
    {
        printf("Enter your choice:\n 1.push\n2.pop\n3.display\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter the element to be pushed:");
            scanf("%d", &x);
            push(x);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
        {
            printf("Enter a valid option:");
        }
        }
    }
}