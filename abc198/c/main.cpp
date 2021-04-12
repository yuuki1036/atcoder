#include <bits/stdc++.h>
using namespace std;
int main()
{
  double r;
  int x, y;
  cin >> r >> x >> y;
  double t = sqrt(pow(x, 2) + pow(y, 2));
  if (t < r)
  {
    cout << 2 << endl;
  }
  else
  {
    cout << ceil(t / r) << endl;
  }
}