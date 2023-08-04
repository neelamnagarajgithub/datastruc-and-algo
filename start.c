#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        sum=sum+i;
    }
    printf("Sum of %d numbers: %d",n,sum);
    return 0;
}