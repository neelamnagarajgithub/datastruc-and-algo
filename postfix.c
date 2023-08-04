#include<stdio.h>
#include<ctype.h>
int stack[50];
int top=-1;
void push(int data) {
  stack[++top]=data;
}
int pop(){
    return stack[top--];
}
int main() {
    int n,n1,n2,n3;
    char exp[30];
    char *e;
    printf("enter the expression:");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0') {
        if(isdigit(*e)) {
            n=*e-48;
            push(n);
        }
        else{
            n1=pop() ;
            n2=pop();
            switch(*e) {
                case '+':
                {
                    n3=n1+n2;
                    break;
                }
                case '-':
                {
                    n3=n2-n1;
                    break;
                }
                case '*':
                {
                    n3=n1*n2;
                    break;
                }
                case '/':
                {
                    n3=n2/n1;
                    break;
                }
            }
            push(n3);
        }
        e++;
    }
    printf("The value of postfix exp:%s is%d",exp,pop());
}