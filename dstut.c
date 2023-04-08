#include<stdio.h>
#include<string.h>
int main() {
    char str[100][100];
    char key[100];
    int n;
    printf("enter the number of names:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    printf("enter the name to be checked:");
    scanf("%s",key);
    for(int i=0;i<n;i++) {
       if(strcmp(str[i],key)==0)
       {
        printf("name is found at position %d",i+1);
        break;
       }
    }
    return 0;
}