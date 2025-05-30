#include<bits/stdc++.h>
using namespace std;

int fibo(int n){

  if(n==0){

    return 0;
  }

  if(n==1){
    return 1;
  }

  int step1 =  n-1;
  int step2= n-2;
  int final= fibo(step1)+fibo(step2);
  return final;
}

int main(){
  int n;
  cout<<"enter fibonachi number"<<" ";
  cin>>n;

   
  int ans = fibo(n);

  cout<<ans;
  return 0;


}