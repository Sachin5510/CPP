#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &a, int n)
{

  for (int i = 0; i < n; i++)
  {
    bool swapped =false;
    for (int j = 0; j < n - i; j++)
    {

      if (a[j] > a[j + 1])
      {
        swap(a[j], a[j + 1]);
        swapped =true;
      }
    }
    if(swapped ==false){
      break;
    }
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

  // vector<int> v = {12, 3, 4, 2, 6, 1};
  vector<int> v = {1,2,3,4,5};

  bubblesort(v, 5);
  printa(v, 5);

  return 0;
}