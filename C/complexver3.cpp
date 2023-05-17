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
    ComplexNum(int a){
        real=a;
        imaginary=a;
    }
    ComplexNum(int x,int y){
        real=x,imaginary=y;
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
    cn.display();
    cn.read();
    cn.display();
    ComplexNum cn2(4,5);
    cn2.display();
    ComplexNum cn3(8);
    cn3.display();
}