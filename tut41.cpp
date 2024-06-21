#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
//   class Derived : visiblity-mode Base1, visiblity-mode Base2,
//   {
//      class body of class "derivedC"
//   };

class base1
{

protected:
    int baselint;

public:
    void set_baseint(int a)
    {
        baselint = a;
    }
};

class base2
{

protected:
    int basel2int;

public:
    void set_base2int(int a)
    {
        basel2int = a;
    }
};

class
    derived : public base1,
              public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << baselint << endl;
        cout << "The value of base2 is " << basel2int << endl;
         cout<<"The sum of base1 and base2 is "<<baselint+basel2int<<endl;
    }
};

// thr inherited derived class will havve look soqething like this
// Data members: 
// baselint--->protected 
// basel2int--->protected
// Member functions:
// set_baseint()--->public
// set_base2int()--->public
// show()--->public
 
int main()
{

    derived sachin;
    sachin.set_baseint(25);
    sachin.set_base2int(35);
    sachin.show();


    return 0;
}