#include<stdio.h>
int main() {
    char arr[100],t;
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
   gets(arr);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-j;j++) {
            if(arr[i+1]<arr[i]) {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
    printf("Sorted array is:\n");
    for(int i=0;i<n;i++) {
        printf("%c\n",arr[i]);
    }
    return 0;
}