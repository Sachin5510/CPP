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
      if (v[j + 1] > temp)
      {
        // shift
        v[j + 1] = v[j];
      }
      else
      {
        break;
      }
    }
  }
}

int main()
{

  return 0;
}