#include <iostream>

using namespace std;

#define w "Welcome to Chitkara Uni"
int a=10;
void sub();

int main(){
    int b=20;
    int c;
    cout << w <<endl;
    c=a+b;
    sub();
    cout << "the answer is " << c;
}

void sub(){
    cout << "this is a subprogram's statement" <<endl;
}

