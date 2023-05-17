#include <iostream>
using namespace std;
class student{
    private:
        int rollno;
        int m[5];
    public:
        int s[5];
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
    for (int i=0;i<5;i++){
        cout << "Enter Marks of Student:" << (i+1) << "\n";
        st.set_marks();
        st.read_marks();
        st.s[i]=st.cal_total();
        cout << st.s[i]<<"\n";}
    cout << "Total marks of all students:\n";
    for (int i=0;i<5;i++){
        cout <<"Student:"<<(i+1)<<"\tMarks:\t"<< st.s[i] << "\n";
    } 
    return 0;
}