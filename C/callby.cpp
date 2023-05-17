#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    int a=100,b=21;
    cout << "Before Swap\nValue of a=" << a <<"\tValue of b=" << b;
    swap(&a,&b);
    cout <<"\nAfter Swapping \nValue of a=" <<a <<"\tValue of b=" << b;
}