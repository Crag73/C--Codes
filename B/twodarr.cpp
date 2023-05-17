#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    int a[3][4]={{1,11,21,31},{2,12,22,32},{3,13,23,33}};
    num1 = *(*(a)+1);
    num2 = *(*(a+1)+2);
    num3 = *(*(a+2)+3);
    cout << "Displaying the numbers using pointers" <<"\n";
    cout << num1 <<"\t"<<num2<<"\t" << num3 << "\n";
    cout << "Displaying matrix\n";
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Displaying transpose of matrix\n";
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cout << a[j][i] << "\t";
        }
        cout << "\n";
    }
    int b[4][4]={{13,3,47,21},{7,29,37,91},{5,17,73,97},{2,59,71,101}};
    cout << b <<"\n" <<*(*(b)) <<"\n" << *(*(b+1)) <<"\n" << *(*(b+2)) <<"\n" << *(*(b+3));
}