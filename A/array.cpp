#include <iostream>
using namespace std;
int main(){
    int marks[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        cout << marks[i] << endl;
        cout<< marks << endl;
        cout << *(marks+i) <<endl;
    }
    int *p=marks;
    for (int i=0;i<10;i++){
        cout << *p++ <<endl; //Memory leaking
    }
}