#include<bits/stdc++.h>
// #include <iostream>
using namespace std;

//  create 2  classes
// 1. simple calculator --> take input of 2 numbers using a utility function and performs +, -, *, / on them & displays the result using another function
// 2. scientific calculator
//    --> take input of 2 numbers using a utility function and performs any 4 operations on them & displays the result using another function

// createe another class hybrid calculator which will have the properties of both calculator and will perform all the operations
// Q1. What type of inheritance are you using?
// Q2. Which mode of inheritance are you using?
// Q3. Create an object of hybrid calculator and display the result of simple and scientific calculator.
//   Q.4. How is code reusability implemented using inheritance?

class SimpleCalculator
{
   int a, b;

public:
   void getDataSimple()
   {
      cout << "Enter the value of a" << endl;
      cin >> a;
      cout << "Enter the value of b" << endl;
      cin >> b;
   }

   void performOperationsSimple()
   {
      cout << "The value of a + b is: " << a + b << endl;
      cout << "The value of a - b is: " << a - b << endl;
      cout << "The value of a * b is: " << a * b << endl;
      cout << "The value of a / b is: " << a / b << endl;
   }
};
class ScientificCalculator
{
   int a, b;

public:
   void getDataScientific()
   {
      cout << "Enter the value of a" << endl;
      cin >> a;
      cout << "Enter the value of b" << endl;
      cin >> b;
   }

   void performOperationsScientific()
   {
      cout << "The value of cos(a) is: " << cos(a) << endl;
      cout << "The value of sin(a) is: " << sin(a) << endl;
      cout << "The value of exp(a) is: " << exp(a) << endl;
      cout << "The value of tan(a) is: " << tan(a) << endl;
   }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
   HybridCalculator calc;
   
   calc.getDataScientific();
   calc.performOperationsScientific();
   calc.getDataSimple();
   calc.performOperationsSimple();

   return 0;
}
