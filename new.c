#include<stdio.h>
int main() {
    int n[5];
    int p,sum=0;
    printf("Enter the number of elemnents u are going to enter");
    scanf("%d",&p);
    printf("Enter the elements of the array:");
    for(int i=0;i<p;i++) {
      scanf("%d",&n[i]);
      sum=sum+n[i];
    }
    printf("sum is :%d",sum);
    return 0;
}