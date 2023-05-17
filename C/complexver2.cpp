#include <iostream>
using namespace std;

class ComplexNum{
    private:
    int real,imaginary;
    public:
    ComplexNum(){
        real=0;
        imaginary=0;
    }
    void  read(){
        cout << "\nEnter a real point:";
        cin>> real;
        cout << "Enter the imaginary point:";
        cin>> imaginary;
    }
    void display(){
        if (imaginary <0){
            cout << real << imaginary <<"i";
        }
        else{
            cout << real << "+" << imaginary <<"i\n";
        }
    }

};
int main(){
    ComplexNum cn;
    cn.read();
    cn.display();
    ComplexNum cn2;
    cn2.display();
}