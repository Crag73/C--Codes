#include <bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void display(){
        cout << "I am in display of base";
    }
};

class derived:public base{
    public:
    void display(){
        cout << "i am in display of derived";
    }
};
int main(){
    base *obj=new derived;
    obj->display();
    derived obj2;
    obj2.base::display();
}