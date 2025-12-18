#include<bits/stdc++.h>
using namespace std;

class employee{
private:
int a , b ,c;
 public:
 int  d ,e;

 void setdata(int a1 , int b1 , int c1);
 void getdata(){

  cout<<"the value of a "<<a<<endl;
  cout<<"the value of b "<<b<<endl;
  cout<<"the value of c "<<c<<endl;
  cout<<"the value of d "<<d<<endl;
  cout<<"the value of e "<<e<<endl;

 }


} e;

void employee :: setdata(int a1, int b1 , int c1){
  a =a1;
  b =b1;
  c=c1;
}

int main(){
  //  employee e;
   e.setdata(2,4,5);
   e.d = 12;
   e.e =20;
   e.getdata();


//private variables van not be set directly
  return 0;
}