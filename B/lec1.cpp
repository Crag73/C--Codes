#include <iostream>
using namespace std;
void ques1(){
    int num1,num2,sum;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    sum=num1+num2;
    cout << "Sum is:";
    cout << sum;
}
void ques2(){
    bool a;
    char b;
    int c;
    float d;
    double e;
    cout << "Size of Bool:"; 
    cout << sizeof(a)<<endl;
    cout << "Size of Char:"; 
    cout << sizeof(b)<<endl;
    cout << "Size of Int:"; 
    cout << sizeof(c)<<endl;
    cout << "Size of Float:"; 
    cout << sizeof(d)<<endl;
    cout << "Size of Double:"; 
    cout << sizeof(e)<<endl;
}
void ques3(){
    int num = 20;       
   cout <<" Number:" << num << endl; 
   num++;
   cout <<" After post increment:" << num << endl; 
   ++num;
   cout <<" After pre increment:" << num << endl; 
   num--;
   cout <<" After post decrement:" << num << endl; 
   --num;
   cout <<" After pre decrement" << num << endl; 
}
void ques4(){
    int num1,num2,var;
    num1=5;
    num2=1;
    cout << "Intially, Num one:"<<num1<<"        " << "Num two:" <<num2<<endl;
    var=num1;
    num1=num2;
    num2=var;
    cout << "After Swapping, Num one:"<<num1<<"     " << "Num two:" <<num2<<endl;

}
void ques5(){
    int num1,num2;
    num1=5;
    num2=1;
    cout << "Intially, Num one:"<<num1<<"        " << "Num two:" <<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout << "After Swapping, Num one:"<<num1<<"     " << "Num two:" <<num2<<endl;
}
int main(){
    //ques1();
    //ques2();
    //ques3();
    //ques4();
    //ques5();
}