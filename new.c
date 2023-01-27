#include<stdio.h>

int main() {
    int i,n,c;
    char str[100];
    char key[100];
    printf("Enter how many strings(names):");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
      scanf("%s",str);
    }
    printf("Enter a string to search:");
    scanf("%s",key);
    for(i=0;i<n;i++) {
        if(strcmp(key==str[i])==0) {
            c=i;
        }
    }
    printf("Found at %d",c);
    return 0;
}