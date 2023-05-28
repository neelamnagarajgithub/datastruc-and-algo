#include<stdio.h>
int main() {
    int arr[100];
    int n,flag=0;
    int low,high,mid,key;
    printf("enter size");
    scanf("%d",&n);
    printf("Enter elements in sorted order:");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter key to be searched");
    scanf("%d",&key);
  low=0;
  high=n-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==key) {
            printf("Key is found at index %d",mid);
            flag=1;
            break;
        }
        if(arr[mid]<key) {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==0) {
        printf("Element not found ");
    }
    return 0;
}