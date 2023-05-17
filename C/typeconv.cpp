#include <bits/stdc++.h>
using namespace std;
class Num{
    int n;
    public:
    Num(int n=0)
    {
        this->n=n;
    }
    operator int(){         //Converting class type to basic type is called unboxing
        return n;           
    }
    operator float(){
        return 8.5;
    }
    void printNum(){
        cout << n;
    }
};
int main(){
    int x;          
    cin>>x;
    cout <<x <<"\n";
    Num N(5);               //When primitive type is converted to class type , it is called autoboxing
    float z=N;
    int y=N;
    cout << x+y;
}