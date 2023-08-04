#include <stdio.h>
#include <stdlib.h>
struct SLL
{
    int data;
    struct SLL *nxt;
} *head;
typedef struct SLL node;
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("Enter the data:");
    scanf("%d", &newnode->data);
    newnode->nxt = NULL;
    return newnode;
}
void insert_at_end()
{
    node *newnode;
    node *temp;
    newnode = getnode();
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = newnode;
    }
}
void del_at_end()
{
    node *temp;
    node *prev;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp-> nxt!= NULL)
        {
            prev = temp;
            temp = temp->nxt;
        }
        prev->nxt = NULL;
        free(temp);
    }
}
void traverse()
{
    node *temp;
    temp = head;
      while (temp!= NULL){
        printf("%d-->",temp->data);
        temp = temp->nxt;
    }
    printf("X");
}
int main()
{
    int choice;
    int n;
    while (1)
    {
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            insert_at_end();
            break;
        }
        case 2:
        {
            del_at_end();
            break;
        }
        case 4:
        {
            if (head == NULL)
            {
                printf("NO more data");
            }
            else
            {
                traverse();
            }
            break;
        }
        }
    }
}