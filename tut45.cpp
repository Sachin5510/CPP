
#include <iostream>
using namespace std;
/*
                     student
                        |
                        |
          ----------------------------
          |                          |
         test                      sports
          |                          |
          |                          |
          ----------------------------
                    result

*/

class student {
    protected:
int roll_no;
public: 
void set_number(int a) {
roll_no=a;
}   

void print_number(){

    cout<<"your Roll no is "<<roll_no<<endl;
}
};

class test : virtual public student {

    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"your result is here: "<<endl
        <<"Maths: "<<maths<<endl
        <<"Physics: "<<physics<<endl;
    }
};

class sports : virtual public student {
    protected:
    float score;
    public : 
    void set_score(float sc){
        score =sc;

    }
    void print_score(){
        cout<<"your PT score is"<<score<<endl;
    }
};

class result : public test , public sports{

    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is: "<<total<<endl;

    }

};
int main(){
    result r;
    r.set_number(420);
    r.set_marks(94.0, 90.0);
    r.set_score(9);
    r.display();
    return 0;
}


// ambibuity resolution in virtual base class in multiple inheritance   