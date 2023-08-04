#include<stdio.h>
#include<stdlib.h>
#define max 6
int front=-1;
int rear=-1;
int queue[max];
void Enqueue(int x) {
    if(front==(rear+1)%max) {
        printf("The circular list is full");
    }
    else if(front==-1&&rear==-1) {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else{
        rear=(rear+1)%max;
        queue[rear]=x;
    }  
}
void dequeue() {
    if(front==-1&&rear==-1) {
        printf("Queue is empty");
    }
    else if(front==rear) {
        printf("Dequeued element:%d",queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("Dequeued element:%d",queue[front]);
        front=(front+1)%max;
    }
}
void display() {
    if(front==-1&&rear==-1){
        printf("Queue is empty");
    }
    else{
    int i=front;
    int c=0;
    while(c<max){
        printf("%d ",queue[i]);
        i=(i+1)%max;
        c++;
    }
    }
}
int main() {
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