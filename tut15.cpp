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
 void  g(void); //--> Acceptable
// void  g(); //--> Acceptable


 int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;   
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    // num1 & num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
//--> Acceptable
g(); //--> Acceptable
    return 0;
 }
  int sum(int a, int b){
    // a and &b are formal parameters whuch will accept the values from actual parameters num1 & num2
   int  c = a+b;
     return c;
     
 }

 void g(){

    cout<<endl<<"Hello, Good Morning"<<endl;
 }