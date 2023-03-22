// array operations
#include <stdio.h>
void traver(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
        /* code */
    }
}
int inset1(int arr[], int n, int index, int cap, int key)
{
    if (n >= cap)
        return -1;
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
            /* code */
        }
        arr[index] = key;
        return 1;
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
int main()
{
    int arr[100], n;
    int key, index;
    printf("Enter the value of n :");
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        /* code */
    }
    printf("Traversal started:\n");
    traver(arr, n);
    printf("Traversal completed successfully.\n");
    printf("Insertion started:");
    printf("\n enter the element to be inserted and index at which it should be inserted:\n");
    scanf("%d%d", &key, &index);
    inset1(arr, n, index, 100, key);
    n = n + 1;
    printf("\n");
    traver(arr, n);
    printf("\n");
    printf("insertion completed successfully\n");
}