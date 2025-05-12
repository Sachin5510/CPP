// by using recurssion
#include<bits/stdc++.h>
using namespace std;

int getsum(int arr[], int n){

  if(n==0){

    return 0;

  }

  if(n==1){

    return arr[0];
  }

  int remainpart = getsum(arr+1 , n-1);
  int sum = arr[0]+ remainpart;


  return sum;
}

int main(){
  

  int a[5]={1,3,4,5,0};
  int n=5;

  int ans = getsum(a, n);
  cout<<ans;
  return 0;
}