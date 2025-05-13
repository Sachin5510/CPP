#include <bits/stdc++.h>
using namespace std;

int partion(int a[], int s, int e)
{

  int pivot = a[s];
  int count = 0;
  for (int i = s + 1; i <= e; i++)
  {

    if (a[i] <= pivot)
    {
      count++;
    }
  }

  // place the pivot to its centre postion
  int pivotIndex = s + count;
  swap(a[pivotIndex], a[s]);

  // now we have place pivot left & right part
  int i = s;
  int j = e;
  while (i < pivotIndex && j > pivotIndex)
  {

    while (a[i] < pivot)
    {
      i++;
    }
    while (a[j] > pivot)
    {
      j--;
    }
  }
  if (i < pivotIndex && j > pivotIndex)
  {

    swap(a[i++], a[j--]);
  }

  return pivotIndex;
}
void quick(int a[], int s, int e)
{

  if (s >= e)
  {

    return;
  }

  int p = partion(a, s, e);

  quick(a, s, p - 1);
  quick(a, p + 1, e);
}

int main()
{

  int a[5] = {1, 3, 2, 9, 4};
  int n = 5;

  quick(a, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}