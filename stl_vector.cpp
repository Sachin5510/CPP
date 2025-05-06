#include<bits/stdc++.h>
using namespace std;


void printvecotr(vector<int> v)
{
  cout<<"size of vector v"<< v.size()<<endl;
  for(int i=0; i<v.size();++i){
    cout<<" "<<v[i]<<" "<<endl;
  }
}

int main(){
   vector<int> v;
   int n;
   cin>>n;

   for(int i =0;i<n;++i){
    int x;
    cin>>x;
    v.push_back(x);
   }
   cout<<endl;
   printvecotr(v);
   cout<<endl;

  return 0;
}