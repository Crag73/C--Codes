#include <iostream>
using namespace std;

class xyz{
    private:
    int num=100;
    friend class ABC;
};
class ABC{
    public:
    void disp(xyz obj){
        cout << obj.num;
    }
};
int main(){
    xyz obj1;
    ABC obj2;
    obj2.disp(obj1);
}