#include <iostream>
using namespace std;

class xyz{
    private:int num=100;
    public:
    friend void disp(xyz obj); };   /*Protected and Private data can be accessed by using friend function
                                    Not in scope of the class where it is declared as friend function
                                    friend method is not called using the object of that class(Because it is not in the 
                                    scope of class)*/

void disp(xyz obj){
    cout<< obj.num;
}

int main(){
    xyz obj1;
    disp(obj1);
}