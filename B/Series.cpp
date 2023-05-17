/* AP
GP 
Factorial
Sin series
Cos series
Checking prime number
Checking armstrong number
Fibonacci series */

//Group 22
// Divyam Bajal [G22-Alpha] (2110991693)*
#include <iostream>
#include <math.h>
using namespace std;
int f,cd,n,num,r,terms,exponent,checknum;
double x;
void ap(int f,int cd,int n){        //Arithmetic Progression : simply takes in the number and uses the formula and prints out the nth term and sum of first n terms
    int nth,add;
    nth=f+(n-1)*cd;
    add=n/2*(2*f+(n-1)*cd);
    cout << "The nth term of the AP is:";
    cout << nth <<endl;
    cout << "The sum of the first n terms is:";
    cout << add;
}
void gp(int f,int r,int n){     // Geometric Progression: simply takes in the number and uses the formula and prints out the nth term and sum of first n terms
    int nth,add;
    nth=f*(pow(r,n-1));
    add=(f*(1-(pow(r,n))))/(1-r);
    cout << "The nth term of the GP is:";
    cout << nth <<endl;
    cout << "The sum of the first n terms is:";
    cout << add;
}
float factorial(int exponent){      // Factorial : takes in the input and with the help of loops , the number gets multiplied from 1 to (exponent) which is the input
    long int fact=1;                //Long int as the value of factorial can become very large very quickly
    for(int i=1;i<=exponent;i++){
        fact=fact*i;
    }
    return(fact);                   //Note: Here it returns the value of factorial , so to print it out we assisn this value to a variable and then print it
}
void sine(double x,int terms){      //Sine series : takes in value of x and no of terms and does the cacluation of sine series till that number
    int count=1;                    //Count is used because one time we have to add in sine series and second time subtract , we can use count to do it
    double sum=0.0;                 //count is also used to determine the power of x and factorial in the denominator
    for (int i=0;i<terms;i++){     //Runs the loop "terms" no. of times
        if (count%2==1){            //If count gives remainder 1 when divided by 2 , the value gets added
            sum+=(pow(x,((count*2)-1)))/(factorial((count*2)-1));       //The formula for sine series , count is used to give the power and factorial  
        }                                                               //We use the previously done factorial function in this
        else{       //If count gives remainder 0 when divided by 2 , the value gets subtracted
            sum-=(pow(x,((count*2)-1)))/(factorial((count*2)-1));         //Subtracting 
        }
        count+=1;
    }
    cout << sum;
}
void cosine(double x,int terms){        //Cosine series : takes in value of x and no of terms and does the cacluation of cosine series till that number
    int count=1;                        //It has the exact same logic as sine series just the difference is the formula , here the power and factorial is even
    double sum=0.0;                     //While is sine they were odd
    for (int i=0;i<terms;i++){
        if (count%2==1){
            sum+=(pow(x,((count*2)-2)))/(factorial((count*2)-2));
        }
        else{
            sum-=(pow(x,((count*2)-2)))/(factorial((count*2)-2));
        }
        count+=1;
    }
    cout << sum;
}
void prime(int checknum){           ///Check if number is prime or not
    int temp=1;                      //We use a variable , if it becomes 1 only then the number will be prime 
    if (checknum<=1){               //1 or less than 1 is not a prime so we give an error
        cout << "Please Enter A Valid Number" <<endl;
    }
    else{                           //Otherwise we check the remainder when divided by 2 to make things a little shorter so it cuts out all the other values
        if (checknum%2==0){         //If remainder is 0 , then it is def not prime
            cout << "The number is not a prime" <<endl;
        }
        else{
            for (int i=3;i<checknum;i+=2){          //Then we check for each number before the given number starting from 3 and in increments of 2
                if (checknum%i==0){
                    temp=0;                         //temp becomes 0 so it is not a prime
                    cout << "The number is not a prime" <<endl;     
                    break;
                }
            }
            if (temp==1){                       //If the loop successfully runs without ever having remainder as 0 with every number before input , then temp reminans 1
                cout << "The number is a prime" <<endl;     //since the temp never became 0 , prints out that number is a prime
            }
        }
    }
}
void arms(int checknum){        //Checks if the number is armstrong or not
    int digit;
    int orignum=checknum;       
    int duplicate=checknum;
    int sum=0,remain,pw;
    while (duplicate!=0){           //runs as long as number is not 0
        duplicate = duplicate/10;   //divides the number by 10 thus reducing digit by 1
        digit+=1;                   //counts the number of digits
    }  
    for (int i=1;i<=digit;i++){     //Runs the loop "digit" times
        remain= orignum%10;         //stores value of the first digit then second and so on for all digits 
        pw=round(pow(remain,digit));    //raising power by the no of digits 
        sum+=pw;                    //Sum value stores the total sum
        orignum/=10;                //Goes to the next digit
    }
    if (sum==checknum){             //Checks if the sum is equal to the original number , if it is then it is an armstrong number
      cout<< "It is an armstrong number" <<endl;
    }
   else{
      cout<<"Not an armstrong number" <<endl;
   }
}
void fibonacci(int n){       //Prints out the fibonacci value at the nth position
    int a=1,b=1,c;          
    if ((n==1)||(n==2)){
        cout << "Fibonacci value:1" <<endl;       //Since the fibonacci value at 1 and 2 is 1 
    }
    else{   
        for (int i=2;i<n;i++){          //If it is not one then runs this simple loop n-2 times
            c=a+b;                      // fibonacci series is basically the sum of last 2 terms so c becomes last two terms first term becomes second term
            a=b;                        // and last term becomes "c"
            b=c;
        }
        cout << "Fibonacci value:";
        cout << c <<endl;
    }
}
int main(){
    cout << endl;
    cout << " 1:Arithmetic progression \n 2:Geometric progression \n 3:Sine \n 4:Cosine \n 5:Factorial \n 6:Checking Prime Number \n";
    cout << "7:Checking Armstrong Number \n 8.Fibonacci series \n Enter the number:" << endl;
    cin >> num;     //Calling out the function based on the input 
    switch(num){
        case(1):        //Taking the required input by the user
            cout << "Enter First term:" <<endl;
            cin >> f;
            cout << "Enter Common Difference:" <<endl;
            cin >> cd;
            cout << "Enter n:" <<endl;
            cin>> n;
            ap(f,cd,n);
            break;
        case(2):
            cout << "Enter First term:" <<endl;
            cin >> f;
            cout << "Enter Common Ratio:" <<endl;
            cin >> r;
            cout << "Enter n:" <<endl;
            cin>> n;
            gp(f,r,n);
            break;
        case(3):
            cout << "Enter value of x(in degrees):" <<endl;
            cin>> x;
            x=x*3.14159/180;
            cout << "Enter the number of terms" <<endl;
            cin >>terms;
            sine(x,terms);
            break;
        case(4):
            cout << "Enter value of x(in degrees):" <<endl;
            cin>> x;
            x=x*3.14159/180;
            cout << "Enter the number of terms" <<endl;
            cin >>terms;
            cosine(x,terms);
            break;
        case(5):
            long int res;
            cout << "Enter an integer:" <<endl;
            cin >> exponent;
            res=factorial(exponent);            //res stores the value which the factorial function returned
            cout << "Factorial of the number is:" << res <<endl;    // prints out the returned value
            break;
        case(6):
            cout << "Enter an integer:" <<endl;
            cin>> checknum;
            prime(checknum);
            break;
        case(7):
            cout << "Enter an integer:" <<endl;
            cin>> checknum;
            arms(checknum);
            break;
        case(8):
            cout << "Enter the number of terms:" <<endl;
            cin>>n;
            fibonacci(n);
            break;
        default:
            cout << "An Error Occured" <<endl;
    }
    cout << endl;
    return 0;
}