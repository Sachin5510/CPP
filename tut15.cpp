 #include <iostream>
 using namespace std;
 
// //defining a function
//  int sum(int a, int b){
//    int  c = a+b;
//      return c;
//  }

// function prototype
// type function-name (arguments);
int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable
int sum(int , int ); //--> Acceptable



 int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;   
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    return 0;
 }
  int sum(int a, int b){
   int  c = a+b;
     return c;
 }