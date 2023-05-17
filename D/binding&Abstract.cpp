//The time the decision is made about which function is to be called describes the type of binding

// Runtime -> Runtime/late time 
// Compile time -> Early time/binding

#include <bits/stdc++.h>
using namespace std;

/*class A{
    int x,y,z;
    void add(int p,int q){
        cout << (p+q);
    }
    void add(int s,int t,int r){            //Function overloading
        cout <<(s+t+r);
    }
}; */                 

//Function Overriding

class A{
    public:
    void display(){
        cout << "In A";
    }
};
class B{
    public:
    void dispay(){
        cout<< "In B";
    } 
};

//Class which contains atleast one pure virtual function is known as Abstract Class
//The implementation of pure virtual function is provided in the derived class