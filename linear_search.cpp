#include<bits/stdc++.h>
using namespace std;


bool lsearch(int nums[], int n, int key) {
  for(int i = 0; i < n; i++) {
      if(nums[i] == key) {
          return true;
      }
  }
  return false;
}

int main(){
  
int size;
cout<<"size "<<endl;
cin>>size;
int arr[100];
int key;
cout<<" Key element"<<" ";
cin>>key;
for(int i=0;i<size;i++){
 cin>>arr[i];

}

if(lsearch( arr, size, key)){ 
  cout<<"key found";
}
else{
  cout<<"Not Found!!!!";
}
  return 0;
}