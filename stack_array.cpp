#include<bits/stdc++.h>
using namespace std;

class stack{

public:
 int *arr;
 int size;
 int top;


 stack(int size){

  this-> size=size;
  arr = new int(size);
  top=-1;

 }

 void push(int element){
if(size-top >1 ){
  top++;
}

else {

  cout<<"stack overflow"<<endl;
}
 }

 void pop(){
if(top>=0){
   top--;
}
else{
  cout<<"stack is underflow";
}

 }

 int peek(){
if(top>=0 && top <size){
  return arr[top];
}
else{
  cout<<"stack is empty"<<endl;
  return -1;
}
 }

 bool isempty(){
if(top ==0){
  return true;
}
return false;
 }

};

int main(){
  
  return 0;
}