#include <bits/stdc++.h>
using namespace std;

void isort(vector<int> &v, int n)
{

  for (int i = 0; i < n; i++)
  {
    int temp = v[i];
    int j = i - 1;
    for (; j >= 0; j--)
    {
      if (v[j] > temp)
      {
        // shift
        v[j + 1] = v[j];
      }
      else
      {
        break;
      }
    }
    v[j + 1] = temp;
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

  vector<int> v = {12, 3, 4, 2, 6, 1};
  // vector<int> v = {1,2,3,4,5};

  isort(v, 5);
  printa(v, 5);

  return 0;
}