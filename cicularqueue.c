#include <stdio.h>
#include <stdlib.h>
#define max 10
int cir_que[max];
int front = -1;
int rear = -1;
int count = 0;
void enqueue(int* x)
{
    if (front == ((rear + 1) % max))
    {
        printf("queue is full\n");
    }
    else if (front ==-1&&rear==-1)
    {
        front = 0;
        rear = 0;
        cir_que[rear] = x;
        count++;
    }
    else
    {
        rear = (rear + 1) % max;
        cir_que[rear] = x;
        count++;
    }
}
int dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is underflow");
    }
    else if (front == rear)
    {
        printf("Dequed element : %d\n", cir_que[front]);
        front = -1;
         rear = -1;
        count--;
    }
    else
    {
        printf("the dequed elemet :%d", cir_que[front]);
        front = (front + 1) % max;
        count--;
    }
}
void display()
{
    int i = front;
    int c = count;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("elemens in a queue:");
        while (c > 0)
        {

            printf("%d ", cir_que[i]);
            i = (i + 1) % max;
            c--;
        }
    }
}

int main()
{
    int op, x;
    while (1)
    {
        printf("press 1. enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter your choice:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter the element to be inserted:");
            scanf("%d", &x);
            enqueue(x);
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
            printf("Entered choice is invalid\n");
            break;
        }
        }
    }
}