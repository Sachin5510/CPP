#include <bits/stdc++.h>
using namespace std;

// maximum number is 
int getmax(int num[], int n)
{

  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (num[i] > max)
    {
      max = num[i];
    }
  }
  return max;
}

// Minimum Number is
int getmin(int num[], int n)
{

  int min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (num[i] < min)
    {
      min = num[i];
    }
  }
  return min;
}

int main()
{
  int size;
  cin >> size;

  int arr[100];

  for (int i = 0; i < size; i++)
  {

    cin >> arr[i];
  }

  cout << "INput arry is";
  for (int i = 0; i < size; i++)
  {

    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "maximum number " << getmax(arr, size) << endl;
  cout << "manimum  number " << getmin(arr, size) << endl;
  return 0;
}




