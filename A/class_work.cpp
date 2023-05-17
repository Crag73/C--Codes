#include <iostream>
using namespace std;

int main(){
    /*float marks[10];
    float total=0;
    cout << "Enter marks of 10 students" << endl;
    for (int i=0;i<10;i++){
        float temp=marks[i];
        cin >> temp;
        total+=temp;
    }
    cout << "Average of students:" << total/10 <<endl; */
    float arr[5][5];
    float avg,perc;
    for (int i=0;i<5;i++){
        float temp=0;
        for (int j=0;j<3;j++){
            cin >> arr[i][j];
            temp+=arr[i][j];
        }
        avg=temp/3.0;
        perc=temp/300.0*100;
        arr[i][3]=avg;
        arr[i][4]=perc;
    }
    cout << "Average:"<< endl;
    cout << arr[0][3] << "\n" << arr[1][3] << "\n" << arr[2][3] << "\n";
    cout << "Percentage:" <<endl;
    cout << arr[0][4] << "\n" << arr[1][4] << "\n" << arr[2][4] << "\n";
}