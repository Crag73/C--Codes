#include <bits/stdc++.h>
using namespace std;

class A{
    int count;
    public:
    void disp(){
        cout << "count=" << count << "\n";
    }
    A(int count=0){
        this->count=count;
    }
};
int main(){
    A obj1,obj2(10);
    obj1.disp();
    obj2.disp();
}