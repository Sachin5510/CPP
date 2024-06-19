#include <iostream>
using namespace std;
class complex {
int a,b;
public:
complex(int , int); // Constructor Declaration
void printnumber()
    {
        cout << "our number is " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(int x , int y){   // default Constructor Definition
    a = x;
    b = y;
    cout<<"Hello World"<<endl;
}

int main(){
    // implicit call
    complex a(5,7);
    

    // explicit call
    complex b = complex(1,2);
    a.printnumber();
    b.printnumber();
    
    return 0;
}