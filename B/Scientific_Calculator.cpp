//Group 22
// Divyam Bajal [G22-Alpha] (2110991693) and Ishaan [G22-Beta](2110991723)
#include <iostream>
#include <math.h> //Importing math.h library to use mathematical ;trignometric and logarithmic functions

using namespace std;
float add(float a,float b){     //Making our own function to add
    return (a+b);
}
float sub(float a,float b){     //Making our own function to subtract
    return (a-b);
}
float mult(float a,float b){    //Making our own function to multiply
    return (a*b);
}
float divi(float a,float b){    //Making our own function to divide
    return (a/b);
}
int main(){
    float num1,num2; // Numbers inputted by the user 
    int operation;         //Operation
    long double pi=3.14159;
    cout <<" --------Scientific Calculator-------- "<< endl;
    cout <<" --------Operations-------- " << endl;
    cout <<" 1:Addition" << endl;
    cout <<" 2:Subtraction" << endl;
    cout <<" 3:Multiplication" << endl;
    cout <<" 4:Division" << endl;
    cout <<" 5:Exponent" << endl;
    cout <<" 6:Square Root" << endl;
    cout <<" --------Trigonometric Functions------- " << endl;
    cout <<" 7:Sin" << endl;     
    cout <<" 8:Cos" << endl;
    cout <<" 9:Tan" << endl;
    cout <<" 10:Sin Inverse" << endl;
    cout <<" 11:Cos Inverse" << endl;
    cout <<" 12:Tan Inverse" << endl;
    cout <<" --------Logarithmic Functions------- " << endl;
    cout <<" 13:Natural Log (base e)" << endl;
    cout <<" 14:Log base 10" << endl;
    
    cout <<"\n\n\n Enter the Serial number of the function you want to perform:" << endl;
    cin >> operation; // Taking the input from user based on what operation they want to perform
    switch(operation)  //Doing the calculations based on the serial number the user inputted
    { 
    case 1:     //Addition
        cout<<"Enter 1st number : "; 
        cin>>num1; 
        cout<<"Enter 2nd number : "; 
        cin>>num2; 
        cout<<"Addition = "<<add(num1,num2)<<endl; 
        break; 
    case 2: //Subtraction
        cout<<"Enter 1st number : "; 
        cin>>num1; 
        cout<<"Enter 2nd number : "; 
        cin>>num2; 
        cout<<"Subtraction = "<<sub(num1,num2)<<endl; 
        break;  
    case 3: ///Multiplication
        cout<<"Enter 1st number : "; 
        cin>>num1; 
        cout<<"Enter 2nd number : "; 
        cin>>num2; 
        cout<<"Multiplication = "<<mult(num1,num2)<<endl; 
        break; 
    case 4:  //Division
        cout<<"Enter 1st number : "; 
        cin>>num1; 
        cout<<"Enter 2nd number : "; //If this number is 0, the answer will be inf -> infite
        cin>>num2; 
        cout<<"Division = "<<divi(num1,num2)<<endl; 
        break; 
    case 5: //Exponent
        cout<<"Enter the number : "; 
        cin>>num1; 
        cout<<"Enter the exponent : "; 
        cin>>num2; 
        cout<<"Exponent = "<<pow(num1,num2)<<endl; 
        break; 
    case 6: //Square Root
        cout<<"Enter the number : "; 
        cin>>num1; // This number can not be negative,if it is negative this code will return NaN(Not a number)
        cout<<"Square Root = "<<sqrt(num1)<<endl; 
        break; 
    case 7: //Sine
        cout<<"Enter the number : "; 
        cin>>num1;         //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Sin = "<<sin(num1/180*pi)<<endl; 
        break; 
    case 8: //Cosine
        cout<<"Enter the number : "; 
        cin>>num1;          //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Cos = "<<cos(num1/180*pi)<<endl; 
        break; 
    case 9: //Tangent
        cout<<"Enter the number : "; 
        cin>>num1;          //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Tan = "<<tan(num1/180*pi)<<endl; //Value does not return infinite at angle = 2(n)*90 angle because the value of
        break;                                  // pi is an approximation and not exact value,so it just returns a very large value
    case 10: //Sin Inverse
        cout<<"Enter the number : "; 
        cin>>num1;         //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Inverse of Sin = "<<asin(num1/180*pi)<<endl; 
        break; 
    case 11: //Cosine Inverse
        cout<<"Enter the number : "; 
        cin>>num1;      //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Inverse of Cos = "<<acos(num1/180*pi)<<endl; 
        break; 
    case 12: //Tangent Inverse
        cout<<"Enter the number : "; 
        cin>>num1;     //Takes value in radians not degrees so we will convert the value from degrees to raidans first
        cout<<"Inverse of tan = "<<atan(num1/180*pi)<<endl; 
        break; 
    case 13: //Log base e (Nautral log)
        cout<<"Enter the number : "; 
        cin>>num1; 
        cout<<"Log = "<<log(num1)<<endl; 
        break; 
    case 14: //Log base 10
        cout<<"Enter the number : "; 
        cin>>num1; 
        cout<<"Log with base 10 = "<<log10(num1)<<endl; //returns 1 if number is 10
        break; 
    default: 
        cout<<"An Error Occured, Please Try Again."<<endl;  //Giving an error incase the user types in something wrong
} 
}