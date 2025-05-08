#include <bits/stdc++.h>
using namespace std;
/*void printmap(map<int, int> m)
{
  cout << m.size() << endl;
  for (auto &pr : m)
  {
    cout << pr.first << " " << pr.second << endl;
  }
}  */

void printsmap(map<int, string> s)
{

  cout << s.size() << endl;
  for (auto &pr : s)
  {
    cout << pr.first << " " << pr.second << endl;
  }
}

int main()
{
  /*
    map<int, int> m;

    m[1] = 2;
    m[2] = 3;
    m[3] = 4;
    m[4] = 5;
    m[5] = 6;
    printmap(m); */

  map<int, string> s;

  s.insert({5, "five"});
  s[2] = "two";
  s[1] = "one";
  s[4] = "four";
  s[3] = "three";

  // s.find(3); 
   printsmap(s);
  return 0;
}