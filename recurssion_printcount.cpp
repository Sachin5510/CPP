#include <bits/stdc++.h>
using namespace std;

int printcount(int n)
{
  if (n == 0)
  {

    return 1;
  }
  //----------------------------------------------
  // prient high -low value
  cout << n << " ";

  printcount(n - 1);
  // --------------------------------------
  // print low to high value
  // printcount(n-1);
  // cout<<n<<" ";
  // ---------------------------------------
}
int main()
{

  int n;
  cin >> n;
  printcount(n);

  return 0;
}