/*Sal of Employee is calculated based on the no. of leaves taken by the employee in a month
If no of leaves taken in a month is >2, basic sal will be reduced by 10% else basic sal will be increased by 5%
increment operator should be overloaded to compute increased salary , decrement operator should be used to compute
reduced salary  Total sal = bsal+hra+ta*/
#include <bits/stdc++.h>
using namespace std;
class Employee{
    float bsal,hra,ta,tsal;
    public:
    int leaves;
    Employee(){
        cout << "Enter your bsal:";
        cin>> bsal;
        cout << "Enter your hra:";
        cin>>hra;
        cout << "Enter your ta:";
        cin>>ta;
        cout << "Enter your leaves taken:";
        cin>> leaves;
    }
    void operator++(){
        bsal=bsal+(0.05*bsal);
    }
    void operator--(){
        bsal=bsal-(0.1*bsal);
    }
    void operator++(int){
        bsal=bsal+(0.05*bsal);
    }
    void operator--(int){
        bsal=bsal-(0.1*bsal);
    }
    void display(){
        tsal=bsal+hra+ta;
        cout << "Your Salary is:" << tsal <<"\n";
    }
};
int main(){
    Employee E;
    if (E.leaves>2){
        E--;
    }
    else{
        E++;
    }
    E.display();
    return 0;
}