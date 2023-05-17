#include <bits/stdc++.h>
using namespace std;
class base{
    public:
    /*base(){
        cout << "i am in base class\n";
    }*/
};
class derived:public base{
    public:
    derived(){
        cout << "i am in derived class\n";
    }
    derived(int i){
        cout << "i am in parameterized constructor\n";
    }
};
int main(){
    derived obj;
    derived onb(2);
    return 0;
}
