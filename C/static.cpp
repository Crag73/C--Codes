#include <iostream>
using namespace std;
#define capacity 200;
class Booking{
    public:
    static int count;
    Booking(int p){
        count+=p;
    }
    int count_display(){
        return count;
    }
};
int main(){
    Booking b(10);
    cout << b.count_display();
    Booking b2(5);
    cout <<"\n" <<b2.count_display();
}