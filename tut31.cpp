#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

     complex(){
        a=0;
        b=0;
     }

    void printnumber()
    {
        cout << "our number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{

    complex c2(5, 7);
    c2.printnumber();

    complex c3(6);
    c3.printnumber();
    
    complex c4;
    c4.printnumber();
    return 0;
}
