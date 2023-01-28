#include<stdio.h>

int main() {
    int a[100];
    int n,t;    
    printf("Enter number the elements:");
    scanf("%d",&n);
   for(int i=0;i<n;i++) {
    scanf("%d",&a[i]);
   }
   printf("Array before sorting :\n");
   for(int i=0;i<n;i++) {
    printf("a[%d]=%d\n",i,a[i]);
   }
   for(int i=0;i<n;i++) {
    if(a[i]>a[i+1])
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
   printf("Array after sorting:\n");
   for(int i=0;i<n;i++)
    {
     printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}