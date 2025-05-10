#include<bits/stdc++.h>
using namespace std;

int main(){
  

  int n;
  cin>>n;


  // int i=1;

  // while (i<=n)
  // {
  //   int j=1;
  //   while (j<=n)
  //   {
  //     cout<<j;
  //     j++;
  //   }
  //   cout<<endl;
  //   // cout<<i<<endl;
  //   i++;
  // } // input 3
  //--- output 12345
  //           12345
          //   12345  



int i =1;
int count=1;
while(i<=n){
int j=1;
while(j<=n){

cout<<count<<" ";
count++;
j++;

}
i++;
}
  return 0;
}