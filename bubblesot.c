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
   for(int i=0;i<n-1;i++) {
    for(int j=1;j<n-i-1;j++) {
        if(arr[j]>arr[j+1]) {
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
   }
printf("The sorted array through bubble sort is:");
for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
}
}