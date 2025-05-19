#include<bits/stdc++.h>
using namespace std;

int main(){
  
  stack<int> s;
  s.push(10);
  s.push(9);
  s.push(8);
  s.push(7);

  s.pop();


  cout<<"top element of stack "<<s.top()<<endl;

  if(s.empty()){
    cout<<"stack is empty";
  }
  else{
    cout<<"stack is not empty";
  }
  return 0;

}