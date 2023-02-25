#include<iostream>
#include<stdlib.h>
using namespace std;
class nagaraj{
public:
int file_size;
int tot_size;
int *p;
void f1(){
    cout<<"file size:  "<<file_size<<endl<<"the used size is:"<<tot_size<<endl;
}
};
void func(nagaraj *n,int tsize,int usize) {
(*n).file_size=tsize;
(*n).tot_size=usize;
(*n).p=(int*)malloc(tsize*sizeof(int));
}
int main() {
    nagaraj marks;
    func(&marks,20,5);
    marks.f1();
    return 0;
}