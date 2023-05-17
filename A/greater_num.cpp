#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    if (a>b){
        cout<< a;
        return 0;
    }
    if (a<b){
        cout << b; 
        return 0;
    }
    cout << "Both Numbers Are Equal";
    return 0;
}