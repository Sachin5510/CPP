#include<bits/stdc++.h>
using namespace std;

int power(int p){

  //base case
if(p==0){
  return 1;
}

// recursive relation
int step1 = power(p-1);
int step2 = 2 * step1;

return step2;




}

int main(){

  int n;
  cin>>n;
  int ans= power(n);
  cout<<ans;
  
  return 0;
}