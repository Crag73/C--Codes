#include <iostream>
#include <math.h>
using namespace std;
class student{
    private:
        int rollno=0;
        int m1=0,m2=0,m3=0;
    public:
        int cal_total();
        void roll_no();
        void set_marks();
        void report();
        student(int p=0){
            if (p>0){
                rollno=p;
            }
        }
};
int student::cal_total(){
    cout << "Total Marks:\t";
    return (m1+m2+m3);
}
void student::set_marks(){
    cout << "Enter Marks:" << "\n";
    cin >> m1 >> m2 >> m3;
}
void student::roll_no(){
    cout << "Your Roll Number Is:" <<rollno;
}
void student::report(){
    cout << "Roll Number:"<< rollno << "\nYour marks are:" << "\n";
    cout << "Subject 1:\t"<<m1 << "\nSubject 2:\t" << m2 << "\nSubject 3:\t" << m3 <<"\n";
}

int main(){
    student st1(6);
    st1.set_marks();
    st1.report();
    cout << st1.cal_total()<<"\n";
    student st2;
    st2.roll_no();
    return 0;
}