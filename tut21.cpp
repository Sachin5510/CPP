//  #include <iostream>
//  using namespace std;
 



//  class Employee 
//  {

//     private:
// int  a, b, c; // private access modifier

//     public:
// int d, e; // public access modifier

// void setData(int a1, int b1, int c1); // Declaration
// void getdata(){
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
//     cout<<"the value of c is "<<c<<endl;
//     cout<<"the value of d is "<<d<<endl;
//     cout<<"the value of e is "<<e<<endl;

// }

//  };
//  // syntax for defining a function outside the class
// //  returntype classname :: functionName(){}
//  void Employee :: setData(int a1, int b1, int c1){
//      a = a1;
//      b = b1;
//      c = c1;
//  }



//  int main(){
     
// Employee harry;
// harry.d = 34; //it access the public data member
//  harry.e = 89; //it access the public data member
// //  harry.a = 4; //it will throw an error because a is private data member of the class
// //  harry.b = 5; //it will throw an error because b is private data member of the class
//  // harry.c = 6; //it will throw an error because c is private data member of the class
// harry.setData(1,2,3); //it access the private data member
// harry.getdata();


//     return 0;
//  }

// personal details of sachin

#include <iostream>
using namespace std;


class sachin {

private :
int salary;
long mobile;

public:
int age;
string name;

   void  setdata(int s, long m);
   void getdata(){

    cout<<"monthly  salary is "<<salary<<endl;
    cout<<"mobile number is "<<mobile<<endl;
    cout<<"age is "<<age<<endl;
    cout<<"name is "<<name<<endl;
    
   }
    };

    void sachin :: setdata( int s , long m){
        salary = s;
        mobile =m;
    }





int main(){
    sachin s1;
    s1.age=21;
    s1.name = "sachin";
    s1.setdata(12000, 1234567890);
    s1.getdata();

    

    
    return 0;
}