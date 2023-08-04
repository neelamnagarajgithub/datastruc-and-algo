#include<stdio.h>
#include<stdlib.h>
struct stack{
 int data;
 struct stack *p;
}*top;
typedef struct stack node;
node *getnode() {
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->p=NULL;
    return newnode;
    }
void push(int x) {
    node *newnode;
    newnode=getnode();
    if(top==NULL) {
        top=newnode;
    }
    else{
        newnode->p=top;
        top=newnode;
    }
}
void pop() {
    node *top1;
    if(top==NULL) {
        printf("the list is empty");

    }

}