#include <iostream>
using namespace std;

// forawrd declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    //Individually declaring functions as friends
    // friend int calculator ::sumcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);
    // acessing the private members of class complex using friend function

// Aliter: Declaring the entire calculator class as friend
friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "our number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c2.setnumber(5, 5);
    c1.printnumber();
    calculator calc;
    int res = calc.sumcomplex(c1, c2);
    cout << "the  sum of real part of o1 and o2 is " << res << endl;
    int resc= calc.sumcompcomplex(c1, c2);
    cout << "the  sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}

//  synatax of Friend Classes & Member Friend Functions
// class classname{
//     friend class classname;
//     friend void classname;
// };
