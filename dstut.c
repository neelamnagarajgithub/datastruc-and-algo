#include<stdio.h>
#include<stdlib.h>
int count();
struct llist{
    int data;
    struct llist *nxt;
}*head;
typedef struct llist node;
node *getnode() {
    node *newnode;
     newnode=(node*) malloc(sizeof(node*));
     printf("Enter the data:");
     scanf("%d",&newnode->data);
     newnode->nxt=NULL;
     return newnode;
}
void createlist(int n) {
    node* newnode;
    node* temp;
    for(int i=0;i<n;i++) {
        newnode=getnode();
        if(head==NULL) {
            head=newnode;
        }
        else{
            temp=head;
            while(temp->nxt!=NULL) {
            temp=temp->nxt;
            }
            temp->nxt=newnode;
        }
    }
}
void insert_at_start() {
    node *newnode;
    newnode=getnode();
    if(head==NULL) {
     head=newnode;
    }
    else
    {
       newnode->nxt=head;
       head=newnode;
    }
}
void insert_at_middle() {
    int c=count();
    int pos,p=1;
    node* prev;
    node *newnode;
    node *temp;
    temp=head;
    newnode=getnode();
    printf("Enter at which position:");
    scanf("%d",&pos);
        if(pos>1&&pos<c) {
            while(p<pos) {
                prev=temp;
                temp=temp->nxt;
                p++;
            }
            prev->nxt=newnode;
            newnode->nxt=temp;
        }
}
void insert_at_end() {
    node *temp;
    node *newnode;
    temp=head;
    newnode=getnode();
    while(temp->nxt!=NULL) {
        temp=temp->nxt;
    }
    temp->nxt=newnode;
}
void delete_at_start() {
    node *temp;
    temp=head;
    if(head==NULL) {
        printf("list is empty\n");
    }
    else{
        temp->nxt=head;
    }
    free(temp);
}
void delete_at_middle() {
    node *prev;
    node *temp;
    temp=head;
    int c=count();
    int p=0,pos;
    if(head==NULL) {
         printf("list is empty\n");
    }
    else{
    printf("Enter the position of the node to be deleted:");
    scanf("%d",&pos);
    if(pos>1&&pos<c) {
        while(p<pos) {
            prev=temp;
            temp=temp->nxt;
        }
        prev->nxt=temp->nxt;
    }
    else{
        printf("Entered position is not in range");
    }
    }
    free(temp);
}
void delete_at_end() {
    node *temp;
    node *prev;
    temp=head;
    if(head==NULL) {
         printf("list is empty\n");
    }
    else{
    while(temp->nxt!=NULL) {
        prev=temp;
        temp=temp->nxt;
    }
    prev->nxt=NULL;
    }
    free(temp);
}
int lr_traverse(node *temp) {
    if(temp->nxt==NULL) {
        return 0;
    }
    else{
        printf("%d-->",temp->data);
        lr_traverse(temp->nxt);
    }
}
int rl_traverse(node *temp) {
    if(temp->nxt==NULL) {
        return 0;
    }
    else{
        rl_traverse(temp->nxt);
        printf("%d-->",temp->data);
    }
}
int count() {
    int c;
    node *temp;
    temp=head;
    if(head==NULL) {
        return 0;
    }
    else{
        while(temp->nxt!=NULL) {
            temp=temp->nxt;
            c++;
        }
        return c;
    }
}
int sum_ll() {
    node *temp;
    int s=0;
    if(head==NULL) {
        printf("linked list is empty");
    }
    else{
        temp=head;
        while(temp->nxt!=NULL) {
            s=s+(temp->data);
            temp=temp->nxt;
        }
    }
}
int choice()
{
    int choice;
    printf("enter your choice:\n");
    printf("1.creating a linked list\n");
    printf("--------------------------------------------\n");
    printf("INSERTION OPERATIONS\n");
    printf("2.inserting at start\n");
    printf("3.insertion at middle\n");
    printf("4.insertion at end of the list\n");
    printf("--------------------------------------------\n");
    printf("DELETION OPERATIONS\n");
    printf("5.deletion at start\n");
    printf("6.deletion at middle\n");
    printf("7.deletion at end\n");
    printf("-------------------------------------------\n");
    printf("TRAVERSING\n");
    printf("8.traversing the lisnked list from left to right\n");
    printf("9.traversing the lisnked list from right to left\n");
    printf("----------------------------------------------\n");
    printf("10.count\n");
    printf("11.Sum\n");
    printf("12.Exit\n");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    int ch, p;
    while (1)
    {
        ch = choice();
        switch (ch)
        {
        case 1:
        {
            printf("Enter the number of nodes to be created:\n");
            scanf("%d", &p);
            createlist(p);
            break;
        }
        case 2:
        {
            insert_at_start();
            break;
        }
        case 3:
        {
            insert_at_middle();
            break;
        }
        case 4:
        {
            insert_at_end();
            break;
        }
        case 5:
        {
            delete_at_start();
            break;
        }
        case 6:
        {
            delete_at_middle();
            break;
        }
        case 7:
        {
            delete_at_end();
            break;
        }
        case 8:
        {
            lr_traverse(head);
            break;
        }
        case 9:
        {
            rl_traverse(head);
            break;
        }
        case 10:
        {
            count();
            break;
        }
        case 11:
        {
            sum_ll();
            break;
        }
        case 12:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("pleae enter a valid choice\n");
            break;
        }
        }
    }
}