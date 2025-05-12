#include<bits/stdc++.h>
using namespace std;




void ok(int src, int des){

  cout<<"source "<<src<<" destinaton "<<des<<" ";
  cout<<endl;

  if(src==des){
cout<<"reached to destinatioan";
    return ;
  }
cout<<endl;
  src++;
 

ok(src, des);
}

int main(){
  int src=1;
 int  desc=10;

 ok(src, desc);

  return 0;
}