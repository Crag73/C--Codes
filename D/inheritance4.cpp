#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int x;
    A(){
        x=5;
    }
    virtual void display(){
        cout << "value of x=" <<x <<"\n";
    }
};

class B:public A{
    int y;
    public:
    B(){
        y=10;
    }
    void display(){
        cout << "value of y=" <<y<<"\n";
    }
};
int main(){
    A obj1,*obj3;
    B obj2;
    obj1.A::display();
    obj1.display();
    obj3=&obj2;
    obj3->display();
}

