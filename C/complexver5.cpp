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
    ComplexNum addComplex(ComplexNum c2){
        ComplexNum c3;
        c3.real=real+c2.real;
        c3.imaginary=imaginary+c2.imaginary;
        return c3;
    }
    ComplexNum subComplex(ComplexNum c4){
        ComplexNum c5;
        c5.real=real-c4.real;
        c5.imaginary=imaginary-c4.imaginary;
        return c5;
    }

    void  read(){
        cout << "\nEnter a real point:";
        cin>> real;
        cout << "Enter the imaginary point:";
        cin>> imaginary;
    }
    void display(){
        if (imaginary <0){
            cout << real << imaginary <<"i\n";
        }
        else{
            cout << real << "+" << imaginary <<"i\n";
        }
    }
    void conjugate(){
        if (imaginary<0){
            cout << real << "+"<< imaginary*-1 << "i\n";
        }
        else{
            cout << real << imaginary*-1 << "i\n";
        }
    }
};
int main(){
    ComplexNum cn;
    cn.display();
    cn.read();
    ComplexNum cn2(4,5);
    cn2.display();
    ComplexNum cn3(8);
    cn3.display();
    ComplexNum cn4;
    ComplexNum cn5(8,9);
    ComplexNum cn6(99,34);
    cn4=cn5.addComplex(cn6);
    cn4.display();
    cn4=cn5.subComplex(cn6);
    cn5.display();
    cn5.conjugate();
    ComplexNum cn7(-64,-65);
    cn7.display();
    cn7.conjugate();
}