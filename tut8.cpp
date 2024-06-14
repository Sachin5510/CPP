#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    // int a = 45;
    // cout<<"the value of a was:"<<a << endl;
    //  a = 39;
    // cout<< "now the value of a is "<<a << endl;

    // *************constants in c++********************
//     const int a = 23;
//     cout<<"the value of a"<< a<<endl;
//     // a = 34; // this a shows the error because the a has error
// cout<<"the value of a is"<< a<< endl;

// **************manipulators************
// int a=20 , b=30, c=40;

// cout<<"the value of a is"<<a<<endl;
// cout<<"the value of b is"<<b<<endl;
// cout<<"the value of c is"<<c<<endl;
// //setw is used to set the width of the output
// cout<<"the value of a is"<<setw(4)<<a<<endl;
// cout<<"the value of b is"<<setw(4)<<b<<endl;
// cout<<"the value of c is"<<setw(4)<<c<<endl;

// ******operator precedence********

int a = 3, b = 4;
// int d =a*5+b;
int c = ((((a*5)+b)-45)+87); //LEFT TO RIGHT
cout<<c<<endl;

} 