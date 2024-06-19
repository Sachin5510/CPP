#include <iostream>
using namespace std;

class bankdeposit {
int principal;
int years;
float interestRate;
float returnValue;
public:
bankdeposit(){} // This is a default constructor
bankdeposit(int p, int y, float r); // r can be a value like 0.04
bankdeposit(int p, int y, int r); // r can be a value like 14
};

bankdeposit ::bankdeposit(int p , int y , float r){

    principal = p;
    years =y;
}
int main(){
    
    return 0;
}