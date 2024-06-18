
// Friend Functions in C++
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
 

    friend complex sumcompelx(complex o1, complex o2);
    void printnumber()
    {
        cout << "our number is " << a << " + " << b << "i" << endl;
    }

};
 complex sumcompelx(complex o1, complex o2)
    {
        complex o3;
        o3.setnumber((o1.a+o2.a), (o1.b + o2.b));
        return o3;
    }
int main()
{

    complex c1, c2 , sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 5);
    c2.printnumber();

sum = sumcompelx(c1, c2);
    sum.printnumber();

    return 0;
}

// ******************syntax for friend function******************
 // friend returntype functionname(classname objectname1, classname objectname2);

//  defination of friend function --> it is not in the scope of class
//  it cannot be called from the object of that class   
//  usually contains the objects as arguments
//  can be declared inside public or private section of the class
//  it cannot access the members directly by their names and need object_name.member_name to access any member.


// properties of friend function
// 1. not in the scope of class --> ex: sumcomplex is not in the scope of class complex
// 2. since it is not in the scope of class, it cannot be called from the object of that class
// 3. can be invoked without the help of any object
// 4. usually contains the objects as arguments
// 5. can be declared inside public or private section of the class
// 6. it cannot access the members directly by their names and need object_name.member_name to access any member.
