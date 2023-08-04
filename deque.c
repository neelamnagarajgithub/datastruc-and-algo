#include<stdio.h>
#include<stdlib.h>
#define max 6
int size=0;
int queue[max];
int front=-1;
int rear=-1;
void inject(int x)  {
    if(front==-1&&rear==-1) {
        front=0;
        rear=0;
        queue[rear]=x;
        size++;
        printf("Enqueue element: %d\n",queue[rear]);
    }
    else if(front==(rear+1)%max) {
        printf("Queue is overflow");
    }
    else {
        rear=(rear+1)%max;
        queue[rear]=x;
        size++;
        printf("Enqueue element:%d\n",queue[rear]);
    }
}
void eject() {
   if(front==-1&&rear==-1) {
    printf("deque underflow");
   } 
   else if(front==rear) {
    printf("Dequeued element: %d\n",queue[front]);
    front=0;
    rear=0;
    size--;
   }
   else{
    printf("Dequeued element:%d",queue[rear]);
      rear=(rear-1+max)%max;
      size--;
   }
}
void display() {
    int i=front;
    int c=size;
    if(front==-1&&rear==-1) {
        printf("NO data to be display\n");
    }
    else{
        while(c>0) {
            printf("%d ",queue[i]);
            i=(i+1)%max;
            c--;
        }
    }
}
int main() {
    int op,x;
    while(1) {
    printf("enter your choice:");
    scanf("%d",&op);
    switch(op) {
        case 1:
        {
            printf("Enter the element to be inserted:");
            scanf("%d",&x);
            inject(x);
            break;
        }
        case 2:{
            eject();
            break;
        }
        case 3:
        {
            display() ;
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Enter a valid option:");
            break;
        }
    }
    }
}