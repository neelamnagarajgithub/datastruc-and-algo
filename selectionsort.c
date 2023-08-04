#include<stdio.h>
int main() {
     int arr[100];
    int n,key,t;
    printf("Enter the value of n");
     scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }


    printf("The sorted array through bubble sort is:");
  for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
   }
}