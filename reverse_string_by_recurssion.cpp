#include <bits/stdc++.h>
using namespace std;

void reverse(string & str, int s, int e)
{

  if (s > e)
  {
    return ;
  }
  swap(str[s], str[e]);
  s++;
  e--;
  reverse(str, s, e);
 
}

int main()
{
  string p = "nihcas";

  reverse(p, 0, p.length() - 1);

  cout << p << endl;

  return 0;
}