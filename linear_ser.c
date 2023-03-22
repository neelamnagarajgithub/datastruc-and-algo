#include<stdio.h>
int lin_ser(int arr[],int n,int key) {
int p=0;
for (int i = 0; i <n; i++)
{
    if(arr[i]==key)
    p=i+1;
    /* code */
}
return p;
}
int main() {
    int arr[100];
    int n;
    int key,y;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
    y=lin_ser(arr,n,key);
    if(y==0) 
    printf("element not found");
    else
    printf("%d is found at position %d\n",key,y);
    
}