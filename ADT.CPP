#include<iostream>
#include<stdlib.h>
using namespace std;
class nag{
    public:
    int tot_size;
    int use_size;
    int *ptr;
}p1;
void setval(nag *n1,int t_siz,int use_siz) {
    n1->tot_size=t_siz;
    n1->use_size=use_siz;
    n1->ptr=(int *) malloc(t_siz*sizeof(int));
}
void inpval(nag *n1) {
    for(int i=0;i<n1->use_size;i++) {
        cout<<"enter the value "<<i;
        cin>>(n1->ptr)[i];
    }
}
void show(nag *n1) {
    cout<<"the values are: ";
     for(int i=0;i<n1->use_size;i++) {
        cout<<"\t"<<(n1->ptr)[i];
    }
}
 int main() {
setval(&p1,10,6);
inpval(&p1);
show(&p1);
}