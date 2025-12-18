#include<bits/stdc++.h>
using namespace std;


class A {

};

int main() {
  
int marks[] ={10, 30, 40,50, 20};
// cout<<marks[0] <<endl;  // print single array elmenet

// using for loop

for(int i=0; i<4 ;i++){

 // cout<<"value of array "<< i << " is " << marks[i] <<endl;

}

//using pointer

int* p = marks;  // no requires & in array

cout<<*(p++)<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;

  return 0;
}
