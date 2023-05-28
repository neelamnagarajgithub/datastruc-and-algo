#include<stdio.h>
#include<string.h>
#define s 100
struct stack {
    int *arr;
    int size;;
    int top;
};
char* in_to_po(char* infix)  {
    char *post;
    int i=0;
    int j=0;
    struct stack *p;
    p->top=-1;
    p->size=s;
    p->arr=(char*)malloc((p->size)*sizeof(char));
    post=(char*)malloc(((strlen(infix))+1)*sizeof(char));
    while(infix[i]!='\0')
    if(!isoperator())  {
        post[]
    }
}
int main() {
    char *e;
    printf("Enter the string:");
    scanf("%d",e);
    in_to_po(e);
}