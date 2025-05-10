#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int n)
{

  int s = 0;     // start
  int e = n - 1; // end

  while (s <= e)
  {

    swap(a[s], a[e]);
    s++;
    e--;
  }
}

void printarray(int a[], int n)
{

  for (int i = 0; i < n; i++)
  {

    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{

  // int size;
  // cout << "size";
  // cin >> size;
  // int arr[100];

  // for (int i = 0; i < size; i++)
  // {

  //   cin >> arr[i];
  // }

  int a[5] = {2, 3, 4, 6, 10};
  int aeven[4] = {1, 2, 3, 4};

  reverse(a, 5);
  reverse(aeven, 4);

  printarray(a, 5);
  printarray(aeven, 4);

  return 0;
}