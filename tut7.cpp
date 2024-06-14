#include<iostream>
using namespace std;
int c = 10; // global variable

int main() {

// ***********basic input output***********
    // int a , b , c; // local variable
    // cout<< "enter th value of  a " << endl;
    // cin>> a;
    // cout<< "enter th value of  b " << endl; 
    // cin>> b;
    // c = a + b;
    // cout<< "the sum of a & b is " <<c<< endl;
    // cout<< "the global variable c is"<<::c; // :: is scope resolution operator( for global variable)
    
    // ********literal constants********
    // float a= 34.4f;
    // long double b = 34.4l;

    // cout<< "the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<< "the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<< "the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<< "the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<< "the size of 34.4L is "<<sizeof(34.4L)<<endl;

    // cout<< "the value of a ="<<a<<endl<<"the value of b =" <<b<<endl;

// ******reference variable********
   
//    float x = 455;
//    float & y = x; // y is reference variable of x
//     cout<< x<<endl<<y<<endl;
    
//      return 0;

// ********typecasting********
    
    int a = 45;
    float b= 45.46;
    cout<<"the vakue of a is "<<a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;
cout<<"the value of b is "<<int(b)<<endl;

int c = int(b);
cout<<"the value of c is "<<a+b<<endl;
cout<<"the value of c is "<<a+int(b)<<endl;
cout<<"the value of c is "<<a+(int)b<<endl; // c style typecasting

    return 0;


}
