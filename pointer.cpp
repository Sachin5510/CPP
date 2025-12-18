#include <bits/stdc++.h>
using namespace std;
class A
{

  // pointer is datatype which hold address of other datatype
};

int main()
{

  int a = 45;
  int* b = &a;

  cout << "the address of a is " << &a << endl;  //  & (Adress of ) of operator
  cout << "the address of a is " << b << endl;
  cout << "the address of a is " << *b << endl;  //here print actual value of that other vairable


  return 0;
}