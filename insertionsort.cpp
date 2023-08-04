#include<iostream>
using namespace std;    +

int main() {
     int arr[100];
    int n,key,x,j,t;
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++) {
     cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        j=i-1;
        x=arr[i];
        while(j>-1&&arr[j]>x) {
          arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
}