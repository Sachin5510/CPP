#include<bits/stdc++.h>
using namespace std;

// int main() {
// 
// vector<int> v={1,2,3,4};
// for(int i=0; i<v.size();++i)
// {
// cout<<v[i]<<" ";

// }
// cout<<endl;

// vector<int> :: iterator it = v.begin();
// cout<<(*(it+1))<<" "<<endl;


// return 0;
// }

int main() {
  
  vector<int> v={1,2,3,4};
  for(int i=0; i<v.size();++i)
  {
  cout<<v[i]<<" ";
  
  }
  cout<<endl;
  
  // vector<int> :: iterator it;   // instead of this we can use auto keyword
  // auto it = v.begin(); // auto keyword is used to automatically deduce the type of the variable
  for(auto it=v.begin(); it!=v.end();++it){
    cout<<(*it)<<" ";
  }
  cout<<endl;

  for(int value : v){
    value++;
    // cout << value << " ";
  }
  
  for(auto  &value : v){
    value++;
    cout << value << " ";
  }
  

  auto a= 1.0; // auto keyword is used to automatically deduce the type of the variable
  cout<<a<<endl; // 1.0 is a double value so a will be of type double
  return 0;
  }