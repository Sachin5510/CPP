#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}, {6, 7}};
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i].first << " " << v[i].second << endl;
  }
  cout << endl;

  vector<pair<int, int>>::iterator it = v.begin();
  for (it = v.begin(); it != v.end(); ++it)
  {
    // cout << (*it).first << " " << (*it).second << endl; 
    // or
    cout<<it->first<<"  "<<it->second<<endl;
  }


  return 0;
}