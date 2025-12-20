#include <bits/stdc++.h>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chk_bin(void);

} b;

void binary ::read(void)
{
  cout << "binary number is " << endl;
  cin >> s;
}

void binary ::chk_bin(void)
{

  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << " binary format is incorrect" << endl;
      exit(0);
    }
    else
    {
      cout << "it is a binary number format" << endl;
      exit(0);
    }
  }
}

int main()
{
  b.read();
  b.chk_bin();

  return 0;
}