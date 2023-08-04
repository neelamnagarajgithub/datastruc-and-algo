#include<stdio.h>
#include<stdlib.h>
struct array{
    int arr[100];
    int n;
}*p;
void insert(struct array *p,int x,int y) {
for(int i=y;i<=p->n;i++) {
   p->arr[i+1]=p->arr[i];
}
p->arr[y]=x;
}
void delete(struct array *p) {
    int k;
    printf("Enter the element at which the element must be deleted:");
    scanf("%d",&k);
    
}
int main() {
    int choice;
    int x,y;
    while(1) {
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice) {
          case 1:
          printf("Enter the element to be inserted and at which index it should be inserted:");
          scanf("%d",&x,&y);
          insert(p,x,y);
        }
    }
    printf("inserting of all thr best in the resists");
}