#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "enter value of a" << endl;
    cin >> a;
    cout << "enter value of b" << endl;
    cin >> b;
    cout << "enter operator" << endl;
    char x;
    cin >> x;
    switch(x){
        case '+':
            cout << "Sum:"<< a+b;
            break;
        case '-':
            cout << "Subtraction:"<<a-b;
            break;
        case '/':
            cout <<"Division:"<< a/b;
            break;
        case '%':
            cout <<"Modulus:"<< a%b;
            break;
        case '*':
            cout <<"Multiplication"<< a*b;
            break;
        default:
            cout << "Invalid Input";
    } //Created on 9-03-2022
    /* Scientific Calculator : Trignometric , Logarithmic*/
    return 0;
}