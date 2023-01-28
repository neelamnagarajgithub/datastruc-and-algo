//program to check a string is a anagram or not
//program done by sorting of strings
#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    char b[100];
    char t;
    int l1=0,l2=0,flag=0,c=0;
    printf("Enter string 1:");
     scanf("%s",a);
     printf("Enter string 2:");
     scanf("%s",b);
     l1=strlen(a);
     l2=strlen(b);
     if(l1==l2){
        //sorting of string1
     for(int i=0;i<l1;i++) {
        for(int j=0;i<l1-i;i++) {
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
     }
     }
     //sorting of string 2
     for(int i=0;i<l2;i++) {
        for(int j=0;i<l2-i;i++) {
        if(b[i]>b[i+1]){
            t=b[i];
            b[i]=b[i+1];
            b[i+1]=t;
        }
     }
     }
     //checking both are equal or not
     if(strcmp(a,b)==0)
       {
        printf("Anagram");
       }
     }
     if(l1!=l2) {
        printf("Not an anagram");
     }
    return 0;
}