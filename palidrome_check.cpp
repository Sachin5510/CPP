#include <bits/stdc++.h>
using namespace std;
bool palidrome(string str, int n, int p)
{

  if (n > p)
  {
    return true;
  }

  if (str[n] != str[p])
  {
    return false;
  }

  else
  {
    return palidrome(str, n + 1, p - 1);
  }
}
int main()
{

  string s = "abaaba";
  cout << endl;

  bool ispalidrome = palidrome(s, 0, s.length()-1);

  if (ispalidrome)
  {
    cout << "it is palidrome" << endl;
  }
  else
  {

    cout << "it is not palidrome";
  }

  return 0;
}