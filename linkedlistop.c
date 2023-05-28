/*............SINGLE...LINKED...LIST........*/
#include <stdio.h>
#include <stdlib.h>
// structure of node
struct lnode
{
    int d;
   struct lnode *nxt;
};
typedef struct lnode node;
// GLOBAL DECLEARATION OF start NODE
node *start;
// creation of a node
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("Enter data");
    scanf("%d", &newnode->d);
    newnode->nxt = NULL;
    return newnode;
}
// creation of linked list of n nodes
void ll(int n)
{
    node *temp;
    node *newnode;

    for (int i = 0; i < n;i++)
    {
        newnode=getnode();    
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp->nxt != NULL)
            {
                temp = temp->nxt;
            }
            temp->nxt = newnode;
        }
    }
}
/*INSERTION AT VARIOUS ENDS*/
// insertion of a node at start
void inser_at_start()
{
    node *newnode;
    newnode = getnode();
    if (start == NULL)
    {
        start =newnode;
     }
    else
    {
        newnode->nxt = start;
        start = newnode;
    }
}
// insertion at middle
void insert_at_middle()
{
    int i = 1;
    int pos, c;
    node *newnode;
    node *prev;
    node *temp;
    temp = start;
    newnode = getnode();
    printf("Enter the position at which the newnode node must be inserted:");
    scanf("%d", &pos);
    while (temp->nxt != NULL)
    {
        prev = temp;
        temp = temp->nxt;
        i++;
    }
    prev->nxt = newnode;
    newnode->nxt = temp;
}
// inserting at the end
void insert_at_end()
{
    node *temp;
    node *newnode;
    newnode = getnode();
    temp = start;
    while (temp->nxt != NULL)
    {
        temp = temp->nxt;
    }
    temp->nxt = newnode;
}
// DELETION OPERATION
// deletion at start
void del_at_start()
{
    node *temp;
    if (start == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        temp = start;
        start = temp->nxt;
    }

    free(temp);
}
// deletion at the end
void del_at_end()
{
    node *temp;
    node *prev;
    temp = start;
    if (start == NULL)
    {
        printf("The linked list is empty");
    }
    else
    {
        while (temp->nxt != NULL)
        {
            prev = temp;
            temp = temp->nxt;
        }
        prev->nxt = NULL;
    }
    free(temp);
}
void del_at_mid()
{
}
// traversing of linked list
// left to right
void lr_traverse(node *newnod)
{
 if (newnod == NULL)
    {
        return;
    }
    else
    {
        printf("%d-->", newnod->d);
         lr_traverse(newnod->nxt);
    }
}
// right to left
void rl_traverse(node *start)
{
    if (start == NULL)
    {
        return;
    }
    else
    {
        rl_traverse(start->nxt);
        printf("%d<--", start->d);
    }
}
void sum_ll() {
    node *temp;
    temp=start;
    int s;
    if(start==NULL) {
        printf("list is empty");
    }
    else{
        while(temp->nxt!=NULL) {
         s=s+temp->d;
          temp=temp->nxt;
        }
        printf("sum of the all the elements of %d\n",s);
    }
}
// menu of options
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
// counting of number of nodes using traversing of list
void count()
{
    int n = 0;
    node *temp;
    temp = start;
    while (temp->nxt != NULL)
    {
        n++;
        temp = temp->nxt;
    }
    printf("NUMBER OF NODES including head node: %d\n", n+1);
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
            ll(p);
            break;
        }
        case 2:
        {
            inser_at_start();
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
            del_at_start();
            break;
        }
        case 6:
        {
            del_at_mid();
            break;
        }
        case 7:
        {
            del_at_end();
            break;
        }
        case 8:
        {
            lr_traverse(start);
            break;
        }
        case 9:
        {
            rl_traverse(start);
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