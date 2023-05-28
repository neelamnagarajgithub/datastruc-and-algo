#include<stdio.h>
#include<stdlib.h>
#define maxsize 20
int arr[20];
int front=-1;
int rear=-1;
void enqueue(int data) {
    if(front==-1&&rear==-1) {
        front=0;
        rear=-1;
        arr[rear]=data;
    }
    else if(rear==maxsize-1){
      printf("Queue is full");
    }
    else{
      rear++;
      arr[rear]=data;
    }
}
void dequeue() {
  if(front==-1&&rear==-1) {
    printf("Queue is empty");
  }
  else{
    printf("Element deleted:%d",arr[front]);
    front++;
  }
}
void display() {
  if(front==-1&&rear==-1) {
    printf("queue is empty");
  }
  else{
    for(int i=front;i<=rear;i++) {
      printf("%d ",arr[i]);
    }
  }
}
void size() {
  printf("size is: %d",rear-front);
}
int main() {
  int op,x;
  printf("press 1.enqueue \n2.dequeue\n3.display\n4.size\n5.exit\n");
   while(1) {
    printf("enter your choice:");
    scanf("%d",&op);
    switch(op) {
      case 1:
      {printf("Enter the element to be inserted:");
      scanf("%d",&x);
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
        size();
        break;
      }
      case 5:
      {
        exit(0);
        break;
      }
    }
   }
return 0;
}