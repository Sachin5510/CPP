#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> &v)
{
  cout << "size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " " << endl;
  }
  v.push_back(7);
}
//---------Dynamic------------------------
// int main()
// {

//   vector<int> v;
//   int n;
//   cin >> n;
//   for (int i=0; i < n; i++)
//   {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }

//   printvector(v);

//   return 0;
// }

//--------------------manual----------------

int main(){

vector<int> v; // 5 is the size of vector and 0 is the default value of vector
v.push_back(1);
v.push_back(2);
vector<int> &v2= v;
v2.push_back(3);
printvector(v);
printvector(v);
printvector(v2);





  return 0;
}