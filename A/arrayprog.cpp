#include <iostream>
using namespace std;
int main(){
    int total=0;
    int marks[10]={90,95,34,78,42,100,88,95,99,79};
    for (int i=0;i<10;i++){
        total+=marks[i];
    }
    int avg= (total/10);
    cout << avg;
}