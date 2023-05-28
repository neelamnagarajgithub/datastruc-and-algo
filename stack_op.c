#include <stdio.h>
#include<stdlib.h>
#define maxsize 20
int isFull(int);
int isEmpty(int);
void push(int *top, int data, int *st[])
{
    int c;
    c = *top;
    if (isFull(c))
    {
        printf("Stack overflow");
    }
    else
    {
        c = *top++;
        *st[c] = data;
    }
}
void pop(int *top, int data, int *st[])
{
    int c;
    c = *top;
    if (isEmpty(c))
    {
        printf("Stack underflow");
    }
    else
    {
        printf("Enter the element to be popped");
        c = *top--;
    }
}
int peek(int *top, int *st[])
{
    int c;
    c = *top;
    if (isEmpty(c))
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        return *st[c];
    }
}
int isFull(int top)
{
    if (top == maxsize - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display(int *st[], int* top)
{int c;
c=*top;
    if (isEmpty(c))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The elements of the stack are: ");
        for (int i = *top; i >= 0; i++)
        {
            printf("%d ", *st[i]);
        }
    }
}
int main()
{
    int *st[20];
    int top = -1;
    int choice;
    int data;
    int d;
    while (1)
    {
        printf("Press1 for push\n");
        printf("Press2 for pop\n");
        printf("Press 3 for peek\n");
        printf("press 4 for display\n");
        printf("Press 5 for exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the element to be pushed:");
            scanf("%d", &data);
            push(&top, data, st);
            break;
        }
        case 2:
        {
            printf("Enter the element to be popped:");
            scanf("%d", &data);
            pop(&top, data, st);
            break;
        }
        case 3:
        {
            d=peek(&top,st);
            printf("The top element is%d\n",d);
            break;
        }
         case 4:
         {
            display(st,&top);
            break;
         }
         case 5:
         {
            exit(1);
         }
         default:
         {printf("enter a valid option");
         break;}
        
        }
    }
}