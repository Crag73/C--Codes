#include <iostream>
using namespace std;
class student{
    private:
        int rollno;
        int m1,m2,m3;
    public:
        int cal_total();
        void set_marks();
        void read_marks();
};

int student::cal_total(){
    cout << "Total Marks:";
    return (m1+m2+m3);
}
void student::set_marks(){
    cout << "Enter Marks!" << "\n";
    cin >> m1 >> m2 >> m3;
}
void student::read_marks(){
    cout << "Your marks are:" << "\n";
    cout << m1 << "\t" << m2 << "\t" << m3 <<"\n";
}

int main(){
    student st;
    st.set_marks();
    st.read_marks();
    cout << st.cal_total();
    return 0;
}