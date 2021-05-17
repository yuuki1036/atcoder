#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  int r = b - a;
  int l = 0;
  for (int i = 1; i < 1000; ++i)
  {
    l += i;
    if (i == r)
    {
      cout << l - i - a << endl;
      return 0;
    }
  }
}