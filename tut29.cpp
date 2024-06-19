#include <iostream>
using namespace std;


class complex {
int a,b;
public:
// Creating a Constructor
//constructor is a special member function with the same as of the class.
//It is used to initialize the objects of its class
//  Constructors are automatically invoked(call) whenever an object is created.
complex(void); // Constructor Declaration
void printnumber()
    {
        cout << "our number is " << a << " + " << b << "i" << endl;
    }
};
//default constructor
complex :: complex(void){   // Constructor Definition
    a = 10;
    b = 0;
    cout<<"Hello World"<<endl;
}

 
int main(){
    complex c;
    c.printnumber();

    return 0;
}


// Constructors In C++ | C++ Tutorials for Beginners #29
// In this tutorial, we will discuss constructors in C++

// Constructors in C++

// A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

// Important Characteristics of Constructors in C++

// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address