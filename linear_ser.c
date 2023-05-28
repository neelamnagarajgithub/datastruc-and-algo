#include<stdio.h>
int main() {
    int arr[100];
    int n;
    int flag=0,key;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter  the elements");
    for(int i=0;i<n;i++) {
        scanf("%d",arr[i]);
     }
    printf("Enter the element to be searched");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
         if(key==arr[i]) {
            printf("Element is found at position %d\n",i+1);
            flag=1;
         }
    }
    if(flag!=1) {
        printf("Element not found\n");
    }
    return 0;
}