#include <bits/stdc++.h>
using namespace std;
class Complex{
    float real,imaginary;
    public:
    void read(){
        cout << "Enter the real part:";
        cin>> real;
        cout << "Enter the imaginary part:";
        cin>> imaginary;
    }
    void display(){
        if(imaginary<0){
            cout <<"\n" << real << imaginary << "i";
        }
        else{
            cout<<"\n"<< real << "+" << imaginary <<"i";
        }
    }
    Complex operator +(Complex &C1){
        Complex C3;
        C3.real=this->real+C1.real;
        C3.imaginary=this->imaginary+C1.imaginary;
        return C3;
    }
    Complex operator -(Complex &C4){
        Complex C5;
        C5.real=this->real-C4.real;
        C5.imaginary=this->imaginary-C4.imaginary;
        return C5;
    }
    Complex operator* (Complex &C1){
        Complex C3;
        C3.real=(this->real)*(C1.real);
        C3.imaginary=(this->imaginary)*(C1.imaginary);
        return C3;
    }
    void operator++ (){
        this->real++;
        this->imaginary++;
    }
    void operator++ (int){
        this->real++;
        this->imaginary++;
    }
};
int main(){
    Complex C1,C2;
    C1.read();
    C2.read();

    Complex res;
    res=C1+C2;
    res.display();
    res=C1-C2;
    res.display();
    res=C1*C2;
    res.display();
    C1++;
    C1.display();
    return 0;
}