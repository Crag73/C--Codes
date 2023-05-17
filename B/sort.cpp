#include <iostream>
#include <vector>
using namespace std;
void bubble(int arr[],int size){
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
            }

        }
    }
    cout << "Bubble sort \n";
    for (int i=0;i<size;i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
}
void inser(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=i;j>0;j--){
            if (arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    cout << "Insertion sort \n";
    for (int i=0;i<size;i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
}
void merge(int arr,int size){
}
int main(){
    int arr[6]={23,64,14,75,96,6};
    bubble(arr,6);
    inser(arr,6);
    return 0;
    int *p=&arr[0];
    int *q=&arr[2];
    
}