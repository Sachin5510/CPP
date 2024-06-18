#include <iostream>
using namespace std;

class binary
{
private:
   string s;
   void chk_bin(void);

public:
   void read(void);
   void ones_complement(void);
   void display(void);
};

void binary :: read(void)
{
   cout << "Enter a binary number" << endl;
   cin >> s;
}
void binary ::chk_bin(void)
{
   for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i) != '0' && s.at(i) != '1')
      {
         cout << "Incorrect binary format" << endl;
         exit(0);
      }
   }
}
void binary :: ones_complement(void)
{
   chk_bin();
   for (int i = 0; i < s.length(); i++)
   {
      if (s[i] == '0')
      {
         s[i] = '1';
      }
      else
      {
         s[i] = '0';
      }
   }
}
void binary :: display(void)
{
   cout << "Displaying the binary number  " << endl;
   for (int i = 0; i < s.length(); i++)
   {
      cout << s.at(i);
   }
   cout << endl;
}

int main()
{

   binary b;
   b.read();
   // b.chk_bin();
   b.display();
   b.ones_complement();
   b.display();
   return 0;
}

//  OOPs- Classes & object
// class-> extension of structures (in C)
// structures had limitations.
// --  members are public
// --  No methods
// 1. structures did not support methods
// 2. structures did not support inheritance
// classes = structures + more
// classes can have methods and properties
// clasess can  make few members as private & few as Public
// classes can support inheritance
// classes are more powerful than structures

// structures in C++ are typedef
// you can declare objects along with the class declaration.
// the function inside the class are defined inside the class itself
// harry , rohan , lovish;
/* class  Employee{
  // class definition
} harry , rohan , lovish; // objects of the class Employee
  // harry.salary = 8 makes no sense if salary is private */
