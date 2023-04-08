#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
int *ptr;
printf("Enter the size of the array");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
}
for(int i=0;i<n;i++){
    printf("%d",*(ptr+i));
}
}