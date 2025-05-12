#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int n)
{


   bool remaingpart;
  if (n == 1 || n == 0)
  {

    return true;
  }

  if (arr[0] > arr[1])
  {

    return false;
  }
  else
  {

   remaingpart = issorted(arr + 1, n - 1);
  }
return remaingpart;

}

int main()
{
  // int arr[5] = {2, 4, 5, 6, 9};
  int arr[6] = {4, 8, 2, 6, 9};


  // int n = 5;
  int n = 6;

  bool ans = issorted(arr, n);
  cout << ans;

  return 0;
}