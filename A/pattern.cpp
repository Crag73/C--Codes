#include <iostream>
using namespace std;

int main(){
    int n=5;
    int count=0;
    for (n;n>0;n--){
        for (int i=0;i<n;i++){
            cout << " ";
        }
    for (int j=5;j>=n;j--){
        cout << "*";
        }
    for (int k=0;k<count;k++){
        cout << "*" ;
    }
    cout << endl;
    count+=1;
    }
}
