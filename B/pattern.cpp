/* Right angle
reverse right angle
triangle
parallelogram
curtains(reverse M)
reverse curtains
kite
bionomial pyramid 
alphabetical pyramid
star 
*/


//Group 22
// Divyam Bajal [G22-Alpha] (2110991693)
#include <iostream>
using namespace std;
int n;
void rightangle(int n){
    cout << "Right Angle" << endl;
    for (int i=0;i<n;i++){          //Determines the number of rows to be printed
        for (int j=0;j<=i;j++){     //value of i increases by 1 everytime is completed so it prints out 1 then 2 then 3
            cout << "*";            // "*" and so on , hence giving us a right angle
        }
        cout << endl;
    }
}
void revright(int n){
    cout << "Reverse Right Angle" << endl;
    for(int i=0;i<n;i++){           //Determines the number of rows to be printed
        for(int j=(n-i);j>0;j--){   //Similar logic as right angle but first value of j is equal to no of rows(n)
            cout << "*";            // and decreases by one each time 
        }
        cout << endl;
    }
}
void triangle(int n){
    cout << "Triangle" << endl;
    for(int i=1;i<=n;i++){      //No. of rows
        for (int j=(n-i);j>0;j--){  //j is used for printing spaces , here when the loop just starts (i=1) , it will print out
            cout << " ";            // the space n-1 times and then decreasing by 1 each time as value of i increases 
        }                               
        for (int k=1;k<=(i*2-1);k++){   //k is used for printing the stars , it starts with one and increases by
            cout << "*";                // two each time by the formula (i*2-1) until the loop of i ends
        }
        cout << endl;
    }
}
void parallelogram(int n){
    cout << "Parallelogram" << endl;
    for(int i=1;i<=n;i++){          //No. of rows
        for (int j=(n-i);j>0;j--){  //Same logic as triangle for printing out the spaces
            cout << " ";
        }
        for (int k=0;k!=n;k++){     //This loop runs "n" times everytime to print out stars equal to the number
            cout << "*";
        }
        cout <<endl;
    }
}
void curtain(int n){
    cout << "Curtains" << endl;
    for(int i=0;i<n;i++){       //No of rows
        for(int j=(n-i);j>0;j--){   //This basically prints out a reverse right triangle
            cout << "*";
        }
        for (int k=1;k<(i*2+1);k++){    // Here it prints out 2 spaces in the second row , 4 in third row , 6 in fourth
            cout << " ";                // and so on until i becomes 1 less than n
        }
        for(int l=(n-i);l>0;l--){       //Another reverse right triangle
            cout << "*";
        }
        cout <<endl;
    }
}
void rev_curtain(int n){
    cout << "Reverse Curtains" << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){     //Prints out a right triangle
            cout<< "*";
        }
        for (int k=2*(n-i);k>2;k--){   //Similar to previous one but instead prints out spaces equal to (n-i) times 2 
            cout << " ";                // each time and decreases the number of spaces printed by 2 with every iteration
        }
        for (int l=0;l<=i;l++){        //Prints out aother right triangle
            cout<< "*";
        }
        cout << endl;
    }
}
void kite(int n){
    cout << "Kite" << endl;
    for (int i=0;i<n;i++){      //First half of the kite
        for (int j=n;j>i;j--){  
            cout << " ";
        }
        for (int k=0;k<(i*2+1);k++){    //Uses same concept as triangle and prints out the first half of the kite
            cout << "*";
        }
        cout << endl;
    }
    for (int i=n-1;i>0;i--){        //Prints second half of the kite , by making a reversed triangle
        for (int j=n;j>=i;j--){     //First prints out 2 spaces , then increases by 1 with each itertaion due to value of 
            cout << " ";            // i being equal to n-1 and loop runs till j reaches value of i
        }
        for (int k=0;k<(i*2-1);k++){
            cout << "*";
        }
        cout <<endl;
    }
}
void binomial(int n){       //Note : If n is more than 1 digit then the Pyramid would look distorted due to double digits 
    cout << "Binomial Pyramid" << endl; //Taking 2 spots (for eg. 10 as 1 and 0) instead of just one
    int count=0;                //Count variable for printing out the second half of the pyramid
    for(int i=1;i<=n;i++){      //No of rows
        for (int j=(n-i);j>0;j--){  //Space logic for printing spaces as used in triangle
            cout << " ";
        }
        for (int k=1;k<=i;k++){     //Prints out the first half of the pyramid where the numbers are increasing
            cout << k;              //Starts with one and increases by 1 with each itetraion
        }
        for (int j=count;j>0;j--){    //Prints out the second half of the pyramid where numbers are decreasing
            cout << j;                  //j is equal to count so the first time it does not run
        }                               //after that it prints out numbers starting from the count and decreasing by 1
        cout << endl;                   //as long as it's greater than 0
        
        count+=1;           //Increasing value of count by 1 to add one more number at the end of the pyramid as used in loop
    }
}
void aph_pyramid(int n){
    cout << "Alphabetical Pyramid" << endl; //Note if the value is high , it will start taking symbols and stuff since ASCII
                                            // value is not only limited to alphabets so we have to make sure input isnt 
                                            // too high
    char ch='A';                 //Declaring the first char as A since the pyramid starts from A
    int count=0;                //Same logic as Binomial pyramid with count
    for(int i=1;i<=n;i++){      //Similar logic as binomial pyramid for printing out spaces
        char ch='A';
        for (int j=(n-i);j>0;j--){  
            cout << " ";
        }
        for (int k=1;k<=i;k++){     //Similar logic as binomial pyramid for printing out spaces
            cout << ch++;           //Increases the value of char by 1 which actaully increases the ASCII value by 1
        }                           //And thus printing out the next alphabet which comes as per ASCII
        ch-=2;               //Decreases the ASCII value by 2 so it goes back a char it was before since the loop increased
                            //it by 1 too , (so C becomes B)
        for (int j=0+count;j>0;j--){
            cout << ch--;       //Prints out the value of char and decreases it by 1 each time
        }
        cout << endl;
        count+=1;           //Same logic as Binomial pyramid with count
    }
}
void star(int n){
    cout << "Star" << endl;     //Basically using the logic ahd coe of curtains and reverse curtains in one to make this symbol
    for(int i=0;i<n;i++){       
        int count=0;
        for(int j=(n-i);j>0;j--){
            count+=1;
            if (count==n){
                break;
            }
            cout << "*";
        }
        for (int k=1;k<(i*2);k++){      //Same code and logic as used for printing out curtains
            cout << " ";                
        }
        for(int l=(n-i);l>0;l--){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=0;j<=i;j++){
            count+=1;
            if (count==n){
                break;
            }
            cout<< "*";
        }
        for (int k=2*(n-i)-1;k>2;k--){      //Same code and logic as used for printing out reverse curtains
            cout << " ";
        }
        for (int l=0;l<=i;l++){
            cout<< "*";
        }
        cout << endl;
    }
}
int main(){
    cout << "Enter the value of n:";
    cin >> n;
    cout << endl;
    rightangle(n);
    cout << endl;
    revright(n);
    cout << endl;
    triangle(n);
    cout << endl;
    parallelogram(n);
    cout << endl;
    curtain(n);
    cout << endl;
    rev_curtain(n);
    cout << endl;
    kite(n);
    cout << endl;
    binomial(n);
    cout << endl;
    aph_pyramid(n);
    cout << endl;
    star(n);
    return 0;
}