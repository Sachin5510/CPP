#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

  if(n==0){
    return 1;
  }
// int step1 = n-1;
// int step2 = n* step1;
// return step2;

return n * factorial(n-1);

}


int main(){
  int n;
  cout<<"number is ";
  cin>>n;
int ans = factorial(n);
 
cout<<"answer is "<< ans;
return 0;
}