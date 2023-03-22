#include<iostream>
using namespace std;
int c;
int  printing(int c,int n) {

  if(c==n) 
  return 0; 
  else{
    cout<<c<<endl;
    return printing(c+1,n);
  }
}
int main() {
int n;
cout<<"enter the value of n";
cin>>n;
  printing(1,n);
}