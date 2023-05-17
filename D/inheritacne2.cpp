#include <bits/stdc++.h>
using namespace std;
class Rectangle{
    protected:
    int len,breadth;
    public:
    Rectangle(){
        len=5;breadth=2;
    }
    Rectangle(int p){
        len=p;breadth=2;
    }
    Rectangle(int p,int q){
        len=p;breadth=q;
    }
    void area(){
        cout<<"Area=" << (len*breadth)<<"\n";
    }
};
class Cuboid:public Rectangle{
    int hgt;
    public:
    Cuboid(){
        hgt=15;
    }
    Cuboid(int p){
        hgt=p;
    }
    Cuboid(int x,int y,int z):Rectangle(x,y){
        hgt=z;
    }
    void volume(){
        cout << "Volume:" << (len*breadth*hgt)<<"\n";
    }
};
int main(){
    Cuboid obj1;
    obj1.volume();
    Cuboid obj2(10);
    obj2.volume();
    Cuboid obj3(2,5,7);
    obj3.volume();
    return 0;
}