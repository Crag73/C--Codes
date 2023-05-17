#include <iostream>
using namespace std;
void func_1(int *);
int main(){
    int x;
    cin >> x;
    func_1(&x);     // & -> Address of 
    cout << x;
    return 0;
}
void func_1(int *x){
    *x=*x+5;
    cout<< *x <<endl; // * -> Value at
}