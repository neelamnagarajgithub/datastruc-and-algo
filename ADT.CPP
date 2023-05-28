#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int *a;
    int n;
    cout<<"enter size of array";
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    cout<<"memory allocated succesfully";
    cout<<"enter the elements";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cout<<endl<<a+i;
    }
}