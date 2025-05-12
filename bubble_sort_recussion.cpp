#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){


  if(n==1 || n==0){

    return ;
  }

  for(int i=0;i<n-1;i++){

    if(arr[i] >  arr[i+1]){

      swap(arr[i], arr[i+1]);
    }
  }
  bubble(arr, n-1);

  
}

void printa(int a[], int n){

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main(){
  
  int a[5]={1,3,2,9,4};
  int n=5;

bubble(a,n);
printa(a, n);
  
  return 0;
}