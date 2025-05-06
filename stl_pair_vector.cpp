#include<bits/stdc++.h>
using namespace std;

void printvector(vector<pair<int,int> > v){

cout<<"size of vector: " << v.size()<<endl;
for(int i=0; i<v.size();i++)
{
cout<<v[i].first<<" "<< v[i].second <<endl;
}

}
// ----------------dynamic------------------------

// int main(){

// vector<pair<int, int> > v;
// int n;
// cin>>n;
// for(int i=0; i<n; i++)
// {
// int x ,y;
// cin>>x>>y;
// v.push_back({x,y});


// }

// printvector(v);


// return 0;
// }

int main(){


 vector<pair <int,int> > v={{1,2},{3,4},{5,6}};
   

printvector(v);
  return 0;

}