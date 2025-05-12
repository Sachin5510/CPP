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


//Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.

// First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
// Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.
// We keep doing this until we get all elements moved to correct position.