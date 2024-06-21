#include <iostream>
using namespace std;

class student
{

protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int r)
{

    int roll_no = r;
}
void student ::get_roll_no(void)
{

    cout << "The roll number is " << roll_no << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks(void)
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_result(void);
};

void result ::display_result(void)
{
    get_roll_no();
    get_marks();
    cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
}
int main()
{
/*

notes:
    1. If we are inheriting B from A and C from B: [ A-->B-->C ]
    2. A is the base class of B and B is the base class of C.
    3. A-->B-->C is called inheritance path.

*/
    result r;
    r.set_roll_no(420);
    r.set_marks(94.0, 90.0);
    r.display_result();

    return 0;
}