#include<stdio.h>
int bin_ser(int arr[],int n,int key ){
int low, mid, high;
    low = 0;
    high = n-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
}
void sort(int arr[],int n) {
int t;
for (int i = 0; i <n; i++)
{t=arr[i];
arr[i]=arr[i+1];
arr[i+1]=t;
 /* code */}
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
    sort(arr,n);
    bin_ser(arr,n,key);
    }