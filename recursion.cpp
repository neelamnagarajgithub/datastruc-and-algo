#include <stdio.h>
#include <stdlib.h>
#define s 10
struct queue
{
    int *arr;
    int front;
    int rear;
    int size;
} ;
int isEmpty(struct queue *p)
{
    if (p->rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *p)
{
    if (p->rear == (p->size) - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *p, int val)
{
    if (isFull(p))
    {
        printf("Queue overflow");
    }
    else if(p->front==-1) {
        p->front=0;
        p->rear++;
        p->arr[p->rear]=val;
    }
    else
    {
        p->rear++;
        p->arr[p->rear] = val;
    }
}
void dequeue(struct queue *p)
{
    int u;
    if (isEmpty(p))
    {
        printf("Queue undeflow");
    }
    else
    {
        p->front++;
    }
}
void display(struct queue *p)
{
    if (isEmpty(p))
    {
        printf("the queue is empty");
    }
    else
    {
        printf("The elements of the queue are:\n");
        for (int i = p->front; i <= p->rear; i++)
        {
            printf("%d ", p->arr[i]);
        }
    }
}
int main()
{struct queue *p;
   p->size=s;   
    p = (int *)malloc(s * sizeof(int));
    p->front=-1;
    p->rear=-1;
    enqueue(p, 98);
    enqueue(p, 78);
    enqueue(p, 74);
    enqueue(p, 45);
    dequeue(p);
    dequeue(p);

    display(p);
    return 0;
}