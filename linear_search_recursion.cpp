#include <bits/stdc++.h>
using namespace std;

bool lsearch(int a[], int n, int k)
{
  bool remain;
  if (n == 0)
  {
    return false;
  }
  if (a[0] == k)
  {

    remain = lsearch(a + 1, n - 1, k );
  }
  return remain;
}

int main()
{

  int n = 5;
  int a[5] = {1, 2, 4, 5, 7};
  int k = 7;

   
bool ans= lsearch(a, n, k);
cout<<ans;
  // if (lsearch(a, n, k))
  // {
  //   cout << "key found";
  // }
  // else
  // {

  //   cout << "key not found";
  // }
  return 0;
}