#include <iostream>
using namespace std;
int c[5];
int *total(int *p,int *q){
    for (int i=0;i<5;i++){
        c[i]=*(p+i)+*(q+i);
    }
    return c;
}
int main(){
    int a[]={12,15,10,7,9};
    int b[]={13,17,10,9,11};
    int *ptr=total(a,b);
    for (int i=0;i<5;i++){
        cout<<"\ntotal of " << i+1 << " student=" << *(ptr+i);
    }
}