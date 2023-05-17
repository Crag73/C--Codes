#include <iostream>
using namespace std;

class ComplexNum{
    private:
    int real,imaginary;
    public:
    void  read(){
        cout << "\nEnter a real point:";
        cin>> real;
        cout << "\nEnter the imaginary point:";
        cin>> imaginary;
    }
    void display(){
        if (imaginary <0){
            cout << real << imaginary <<"i";
        }
        else{
            cout << real << "+" << imaginary <<"i";
        }
    }
 
};
int main(){
    ComplexNum cn;
    cn.read();
    cn.display();
}