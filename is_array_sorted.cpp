#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
   
  }
  return true;
}
int main()
{
  // int arr[5] = {3, 4, 8, 2, 9};
  int arr[5] = {3, 4, 7, 8, 9};

  int n = 5;

  bool ans = issorted(arr, n);
  cout<<ans;

  return 0;
}