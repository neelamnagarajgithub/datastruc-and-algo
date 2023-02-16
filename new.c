#include<stdio.h>
int sum(int n) {
  if(n==0) 
  return 0;
  else
  return (n%10)+sum(n/10);
}
int main() {
  int n,y;
  printf("Enter a number:");
  scanf("%d",&n);
  y=sum(n);
  printf("Sum of digits of the given number :%d",y);
  return 0;
}