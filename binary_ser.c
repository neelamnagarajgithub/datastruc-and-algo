#include<stdio.h>
#include<stdlib.h>
int return_binary(int arr[],int key,int n) {
    int low=0,mid;
    int high=n-1;
    while(low<=high) {
         mid=(low+high)/2;
         if(arr[mid]==key)  
         { 
            return mid;
         }
         else if(arr[mid]>key) 
         {
            high=mid-1;
         }
        else {
          low=mid+1;
        }
    }
    return -1;
}
int main() {
    int arr[100];
    int n,key,y;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
    }
    printf("Enter the key to  be searched:");
    scanf("%d",&key);
    y=return_binary(arr,key,n);
  if(y!=-1) {
      printf("Element is found at the position %d\n",y+1);
    }
  else{
    printf("Element is not found in the array");
  }
    return 0;
}