#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class point{
    public:
    int x,y,z;
    int count=1;
    vector<vector<int>> v1;
    point(){
        int a,b,c;
        cout<< "Enter the value of the points:" << endl;
        cin >> a >> b >> c;
        x=a;
        y=b;
        z=c;
        cout << "Point:" << x <<","<< y <<","<<z << " is stored at position:" << count << "\n";
        count+=1;
        vector <int> v2={x,y,z};
        v1.push_back(v2);
    }
    void disp(){
        cout << "Your Stored points are:\n";
        cout << "x\ty\tz\n";
        for(int i=0;i<(count-1);i++){
            for (int j=0;j<3;j++){
                cout << v1[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void add(){
        int a,b,c;
        cout<< "Enter the value of the points:" << endl;
        cin >> a >> b >> c;
        x=a;
        y=b;
        z=c;
        cout << "Point:" << x <<","<< y <<","<<z << " is stored at position:" << count << "\n";
        count+=1;
        vector <int> v2={x,y,z};
        v1.push_back(v2);
    }
    void pos(){
        int pos;
        cout << "Enter the position of the point:\n";
        cin >> pos;
        if (pos>count){
            cout << "Position is too high";
            return;
        }
        cout << "The point at the position "<< pos << " is:\n";
        cout << "x\ty\tz\n";
        for(int i=0;i<3;i++){
            cout << v1[pos-1][i] << "\t";
        }
        cout << "\n";
    }
    void distance(int count1,int count2){
        double distance;
        distance=pow(pow(v1[count2-1][0]-v1[count1-1][0],2)+pow(v1[count2-1][1]-v1[count1-1][1],2)+pow(v1[count2-1][2]-v1[count1-1][2],2),0.5);
        cout << "The distance between the points is:" << distance;
    }
};

int main(){
    point abc;
    abc.disp();
    abc.add();
    abc.disp();
    abc.pos();
    abc.distance(1,2);
}
