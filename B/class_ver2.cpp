#include <iostream>
using namespace std;
class student{
    private:
        int rollno;
        int m[5];
    public:
        int cal_total();
        void set_marks();
        void read_marks();
};

int student::cal_total(){
    int total=0;
    cout << "Total Marks:";
    for (int i=0;i<5;i++){
        total+=m[i];
    }
    return total;
}
void student::set_marks(){
    cout << "Enter Your Roll No:";
    cin >> rollno;
    cout << "Enter Marks:" << "\n";
    for (int i=0;i<5;i++){
        cout << "Enter marks of subject "<<(i+1)<<":\n";
        cin >> m[i];
    }
}
void student::read_marks(){
    cout << "Roll Number:"<< rollno << "\n";
    for (int i=0;i<5;i++){
        cout << "Your Marks of Subject " << (i+1) << " is:\t" << m[i] << "\n";
    }
}

int main(){
    student st;

    st.set_marks();
    st.read_marks();
    cout << st.cal_total();
    return 0;
}