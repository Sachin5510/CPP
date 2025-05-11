#include <bits/stdc++.h>
using namespace std;

void sorts(vector<int> &nums, int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    int minindex = i;
    for (int j = i + 1; j < n; j++)
    {

      if (nums[j] < nums[minindex])
        minindex = j;
    }
    swap(nums[minindex], nums[i]);
  }
}

void printa(vector<int> &v, int n)
{

  for (int i = 0; i < n; i++)
  {

    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v = {1, 3, 8, 10, 3};
  vector<int> vs={ 10, 9,2, 3,6,1};

  // sorts(v, 5);
  sorts(vs, 6);
  // printa(v, 5);
  printa(vs, 6);
  return 0;
}