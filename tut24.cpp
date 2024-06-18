#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // this is a static data member
                      // static data member is shared by all the objects of the class
                      // it is initialized only once
                      // it is used to access the common data of all objects
                      // it is declared using the static keyword
                      // it is declared inside the class and defined outside the class
                      // it is accessed using the class name

public:
    void setdata(void)
    {
        cout << "enter the id  " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id is " << id << "and this is employee number " << count << endl;
    }

    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    
    }
};

// cout is static data member of class employee

//  int employee::count; // if count starts from 0 then it will be 0,1,2,3
int employee::count = 1000; // if count starts from 1000 then it will be 1000,1001,1002,1003
int main()
{
    employee E, B, G;
    // E.id;
    // E.count; // both id and count are private and cannot be accessed outside the class
    E.setdata();
    E.getdata();
employee::getcount();

    B.setdata();
    B.getdata();
employee::getcount();

    G.setdata();
    G.getdata();
employee::getcount();

    return 0;
}