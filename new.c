#include<stdio.h>
int main()
{
int a[20],*p,i,n,key,found=0;
printf("Enter the size of an array");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("Enter a key to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==*(p+i))
{
found=1;
break;
}
}
if(found==1)
printf("Key found at %d position",i+1);
else
printf("key not found");
}