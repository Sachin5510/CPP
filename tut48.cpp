#include <bits/stdc++.h>
using namespace std;
/*
case:1
class B : Class A{
// order oder  of execution of constructor --> first A() then B()
};

case:2
class A : public B, public C{
// order oder  of execution of constructor --> first B() then C() then A()
};

case:3
class A : public B, virtual public C{
// order oder  of execution of constructor --> first C() then B() then A()
};

case:4
class A : virtual   public B, virtual public C{
// order oder  of execution of constructor --> first B() then C() then A()
};

*/

class base1
{

    int data;

public:
    base1(int i)
    {

        data = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdata(void)
    {

        cout << "The data is " << data << endl;
    }
};

class base2
{

    int data;

public:
    base2(int i)
    {

        data = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdata1(void)
    {

        cout << "The data is " << data << endl;
    }
};


class derived:  public base2, public base1  {
  int derived1, derived2; 
  public:  
  derived(int a, int b , int c, int d): base2(b),base1(a)  {

    derived1=c;
    derived2=d;
    cout<<"derived class constructor called"<<endl; 
  }

  void printdata2()
  {
    cout<<"the value of derived1 is"<<derived1<<endl; 
    cout<<"the value of derived2 is"<<derived2<<endl; 
  }
};
int main(){
    derived harry(1, 2, 3, 4);
    harry.printdata2();
    harry.printdata1();
   return 0;
}
