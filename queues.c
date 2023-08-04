#include <stdio.h>
#include <stdlib.h>
#define max 6
int front = -1;
int rear = -1;
int queue[max];
void Enqueue(int x)
{
    if (rear == max - 1)
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty");
    }
    else if (front == 0 && rear == 0)
    {
        printf("Dequeued element :%d\n", queue[front]);
        front--;
        rear--;
    }
    else
    {
        printf("Dequeued element :%d\n", queue[front]);
        front--;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
    }
}
int main()
{
    int op, x;
    printf("Press 1.Enqueue\n 2.Dequeue\n 3.Display \n 4.Exit");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter value:");
            scanf("%d", &x);
            Enqueue(x);
            break;
        }
        case 2:
        {
            dequeue();
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
            break;
        }
        default:
        {
            printf("Enter a valid option");
        }
        }
    }
}