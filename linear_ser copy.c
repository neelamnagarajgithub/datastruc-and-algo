#include<stdio.h>
int find(int arr[],int n){
int key;
int p=n;
printf("Enter the element to be found:");
scanf("%d",&key);
for (int i = 0; i < n; i++)
{     
    if(arr[i]==key) {
        p=i;
    }
    /* code */
}
return p;
}
int main() {
    int arr[100];
    int n,y;
    printf("enter the n:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    y=find(arr,n);
    if(y==n) {
        printf("Element not found\n");
    }
    else{
     printf("Element is found at %d position\n",y+1);
    }
    
}