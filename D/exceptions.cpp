#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int n;
    try{
        cin>>a>>b>>n;
        if (n<0){
            throw (n);
        }
        else{
            int c[n];
        }
        if (a==0){
            throw "Division by zero is not valid";
        }   
        else{
            cout << b/a;
        }}
    catch(int x){
            cout << "Array index can not be negative";
        }
    catch (const char* msg){
        cout << msg;
    }
    cout << "\nI am outside try\n";
    int c=5,f=7;
    cout << (c+f);
}