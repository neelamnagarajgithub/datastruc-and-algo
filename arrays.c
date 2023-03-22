//code of insertion without shifting the elements
#include<stdio.h>
void traver(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
        /* code */
    }
}
int inset2(int arr[], int n, int index, int cap, int key)
{
    if (n >= cap)
        return -1;
    else
    {
        arr[n]=arr[index];
        arr[index] = key;
        return 1;
    }
}
int del(int arr[], int n, int dele, int cap)
{
    if (n >= cap)
        return -1;
    else
    {
        for (int i = dele; i <n; i++)
        {
            arr[i] = arr[i+1];
            /* code */
        }
        return 1;
    }
}
int main() {
    int arr[100],n,dele;
    int key,index;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
     printf("Traversal started:\n");
    traver(arr, n);
    printf("Traversal completed successfully.\n");
    printf("Insertion started:");
    printf("\n enter the element to be inserted and index at which it should be inserted:\n");
    scanf("%d%d", &key, &index);
    inset2(arr, n, index, 100, key);
    n = n + 1;
    printf("\n");
    traver(arr, n);
    printf("\n");
    printf("insertion completed successfully\n");
    n=n-1;
    printf("ARRAY  element Delation started :\n");
    printf("Enter the index at which element to be deleted:\n");
    scanf("%d",&dele);
    del(arr,n,dele,100);
n=n-1;
    traver(arr, n);
    printf("\nDeletion done successfully");
}