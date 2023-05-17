#include <iostream>

using namespace std;
class Book
{  
    int c;
    public:
    static int count;
    Book(int p=0){
        count+=p;
        cout<<count<<endl;
    }
    void cancel_tick(int x)
    {
        c=x;
    }
    ~Book()
    {
        count-=c;
        cout<<count<<endl;
    }
};
int Book:: count=0;
int main()
{
    Book anshu(5);
    Book Farhan(6);
    Farhan.cancel_tick(3);
   
}