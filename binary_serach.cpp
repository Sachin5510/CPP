#include <bits/stdc++.h>
using namespace std;

int binarys(int nums[], int n, int key)
{

  int start = 0;
  int end = n - 1;

  //int mid = (start+end)/2;  // it will possible for small values 
  int mid = start + ((end-start)/2);

  while (start <= end)
  {
    if (nums[mid] == key)
    {
      return mid;
    }
// right part
    if (key > nums[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  //  mid = (start+end)/2;
    mid = start + ((end-start)/2);
  }
  return -1;
}

int main()
{

  int arr[5] = {1, 3, 5, 8,9};

  int index = binarys(arr, 5, 9);
  cout << "the key index of 8 is " << index;
  return 0;
}